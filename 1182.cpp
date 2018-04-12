#include <cstdio>

int N,S;
int arr[21], sum, cnt;

void check(int index, int sum){
	if(index==N){
		if(sum == S) ++cnt;
		return;
	}

	if(index<N){
		check(index+1, sum);
		check(index+1, sum + arr[index]);
	}
}

int main(){
	scanf("%d %d", &N, &S);
	for(int i = 0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	check(0, 0);
	if(S==0) --cnt;
	printf("%d\n", cnt);
}