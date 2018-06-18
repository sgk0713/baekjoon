#include <cstdio>
#include <cstring>

int N, cache[1001];

int dp(int n){
	if(n<2) return n;

	int &ret = cache[n];
	if(ret != -1) return ret;

	return ret = (dp(n-1) + dp(n-2))%10007;
	//(a+b)%n = (a%n+b%n)%n ->a+b가 범위를 벗어날 경우
}

int main(){
	memset(cache, -1, sizeof(cache));


	return 0;
}