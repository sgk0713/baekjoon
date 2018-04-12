#include <cstdio>

int OneTwoThree(int num){
	if(num<3) return num;
	else if(num==3) return 4;
	else return OneTwoThree(num-1)+OneTwoThree(num-2)+OneTwoThree(num-3);
}
int main(){
	int n, T;
	for(scanf("%d", &T);T;T--){
		scanf("%d", &n);
		printf("%d\n", OneTwoThree(n));
	}
	return 0;
}