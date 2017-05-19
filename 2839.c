#include <stdio.h>
int main(){
	int n, cnt=0;
	scanf("%d", &n);
	if(n<3 || n>5000) return 0;

	for(int i=0;i<n;){
		if(n%5 == 0){
			cnt += (n/5);
			break;
		}else if(n%5 != 0){
			n -= 3;
			cnt++;
		}
	}
	if(n<0) printf("-1");
	else printf("%d", cnt);
	return 0;
}