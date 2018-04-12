#include <cstdio>
#include <queue>
#include <cmath>
using namespace std;



bool prime[10000];
int solve(int start, int end){
	queue<int> q;
	check[start]  = 0;
	q.push(start);
	while(!q.empty() && check[end] == -1){
		int x = q.front();
		q.pop();

		for(int i = 0; i<4; i++){
			int xx = x - (x / (int) pow(10,i))%10 * pow(10, i);
			for(int j = 0;j<10;j++){
				int y = xx + pow(10, i) * j;
				if(y < 1000 || !prime[y] || check[y] != -1) continue;
				check[y] = check [x]+1;
				q.push(y);
			}
		}
	}
	return check[end];
}
int main(){
	memset(prime, 1, sizeof(prime));
	prime[0] = prime[1] = 0;
	for(int i = 2; i<10000; i++){
		if(prime[i]){
			for(int j= i*i; j<10000; j+=i){
				prime[j] = false;
			}
		}
	}
	int T;
	for(scanf("%d", &T); )



	return 0;

}