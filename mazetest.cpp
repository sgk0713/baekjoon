#include <cstdio>
#include <queue>
using namespace std;
typedef pair<int, int> ii;

int T, m, n, hole;
int map[1001][1001];
ii holearr[1001];


int main(){
for(scanf("%d", &T);T--;){//input the number of Test case
	scanf("%d %d", &m, &n);//input the number of demention of the matrix
	
	for(int i=0; i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &map[i][j]); // input the numbers into the matrix
			if(map[i][j]==1) map[i][j] = -1; //switch the value of wall to -1
		}
	}
	
	scanf("%d", &hole);//input the number of hole
	for(int i=1; i<=hole; i++){
		int i1, i2, o1,o2;
		scanf("%d %d %d %d", &i1, &i2, &o1, &o2);
		map[i1][i2] = i;
		map[o1][o2] = 0;
		holearr[i] = {o1 ,o2};
	}

	

	for(int i=0; i<m;i++){ //output the switched matrix
		for(int j=0;j<n;j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	
}

	return 0;
}