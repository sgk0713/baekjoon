#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int N, cache[10000001];


int dp(int s){
	//종료조건
	if(s==1) return 0;//반복조건에서 +1 해주기때문에

	int& ret = cache[s];//레퍼런스 변수, cache의 주소값을 갖는다
	if(ret != -1) return ret;//-1이 아니라면 계산된 경우이기때문에 반환해준다

	//반복조건
	ret = dp(s-1)+1;
	if(s%2==0) ret = min(ret, dp(s/2)+1);
	if(s%3==0) ret = min(ret, dp(s/3)+1);
	return ret;

}
int main(){
	memset(cache, -1, sizeof(cache));

	scanf("%d", &N);
	printf("%d\n", dp(N));
}