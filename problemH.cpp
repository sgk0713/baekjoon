#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
	
	int t;

	for(scanf("%d",&t);t >0; t--){
		int n, k;
		scanf("%d %d",&n,&k);
		char c;
		int count = 2*n+1;
		bool check = false;
		char v = 'I';
		int result = 0;

		for(int i = 0; i<= k; i++){
			scanf("%c",&c);
			if(c == v){
				if(v == 'O') v = 'I';
				else v = 'O';
				count--;
			}else{
				if(c == 'I'){
					count = 2*n;
				}else
					count = 2*n + 1;
			}
			if(count == 0){
				check = true;
				count = 2;
			}
			if(check){
				result++;
				check = false;
			}
		}
		printf("%d\n",result);
	}
	return 0;
}