#include <cstdio>
#include <algorithm>//sort, min, max
using namespace std;

int N, M;
char arr[55][55] = {};

int func(int, int);
int main(){

	scanf("%d%d", &N, &M);
	for(int i=0;i< N;i++){
		scanf("%s", arr[i]);
	}

	int ans = 100, tmp=0;
	for(int i = 0;i < N-7; i++){
		for(int j = 0; j < M-7; j++){ 
			tmp = func(i, j);
			if(ans>tmp) ans = tmp;
		}
	}
	printf("%d\n", ans);
}

int func(int x, int y){
	int b = 0, w = 0;
	for(int i = 0; i< 8; i++){
		for(int j = 0; j < 8; j++){
			//B라고 가정
			if(((i+j)%2==0) && arr[i+x][j+y]=='W') b++;
			if(((i+j)%2==1) && arr[i+x][j+y]=='B') b++;

			//W라고 가정
			if(((i+j)%2==0) && (arr[i+x][j+y]=='B')) w++;			
			if(((i+j)%2==1) && arr[i+x][j+y]=='W') w++;
		}
	}
	return min(b, w);
}
