#include <cstdio>

void star(int num){
	if(num==0) printf("\n");
	else {
		printf("*");
		star(num-1);
	}
}

void space(int num){
	if(num > 0){
		printf(" ");
		space(num-1);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i<=n; i++){
		space(n-i);
		star(i);
	}
	return 0;
}