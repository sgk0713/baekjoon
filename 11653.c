#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2; i<=n; i++){
		if(n%i!=0) continue;
		printf("%d\n", i);
		n /= i;
		i--;
	}
	return 0;
}