#include <cstdio>
#include <cstring>

int N,M,A[2001], cache[2001][2001];

int dp(int s, int e){
	if(s>e) return 1;

	int &ret = cache[s][e];
	if(ret != -1) return ret;

	if(A[s] == A[e]){
		return ret = dp(s+1, e-1);
	}
	return ret = 0;
}



int main(){
	memset(cache, -1, sizeof(cache));

	scanf("%d", &N);

	for(int i = 1; i<=N; i++)
		scanf("%d", &A[i]);
	scanf("%d", &M);

	for(int i = 0; i<M; i++){
		int S, E;
		scanf("%d %d", &S, &E);
		printf("%d\n", dp(S, E));
	}

}