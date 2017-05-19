#include <stdio.h>
#include <string.h>


int main(){
	char a[100];
	char b[100];
	scanf("%s", a);
	int len = strlen(a);
	int j=len-1, t;
	for(int i = 0; i < len/2; i++){
		if(a[i] != a[j]){
			t = 0;
			break;
			j--;
		}else t = 1;j--;

	}
	printf("%d", t);
	return 0;
}