#include<cstdio>
#include<algorithm>

using namespace std;
int cmp(int a, int b){
   return max(a,b);
}
int main(){
	int a[10001]={0};

	int T;
	for(scanf("%d",&T); T--;){
		int hp;
		scanf("%d",&hp);
		a[0] = 0;
		a[1] = 1;
		a[2] = 2;

		int maxs = 1;
		int maxL = 1;
		
		for(int i = 3; i < hp+1; i++){
			if(i%2 == 0){
				a[i] = min(a[i/2],a[i-3]) +1;
			}else{
				a[i] = min(a[i-3],a[i-1])+1;
			}
			if(maxs != cmp(maxs,a[i])){
				maxL = i;
				maxs = cmp(maxs,a[i]);
			}
		}
		if(hp==2){
			printf("2 2");
		}else printf("%d %d\n",maxs,maxL);
	}
}