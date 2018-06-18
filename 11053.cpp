#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int N, A[1001], cache[1001];

int dp(int idx){
	//종료조건이 없어도 된다. for문이 안들어가지고 ret도 초기화해주기 때문에 

	int &ret = cache[idx];
	if(ret != -1) return ret;

	ret = 1;
	for(int i = idx+1; i<N;i++){
		if(A[idx] < A[i]){
			ret = max(ret, dp(i)+1);
		}
	}
	return ret;
}
int main(){

	memset(cache, -1, sizeof(cache));

	scanf("%d", &N);

	for(int i = 0;i<N; i++){
		scanf("%d", &A[i]);
	}

	int ans = 0;
	for(int i = 0; i<N; i++){
		ans = max(ans, dp(i));
	}
	printf("%d\n", ans);
	return 0;
}