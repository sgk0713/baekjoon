#include <stdio.h>
#include <string.h>
int main(){
	char a[100] = {};
	
	scanf("%s", a);
	for(int i=0; i<strlen(a); i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i] -= 'a';
			a[i] += 'A';
		}else if(a[i]>='A' && a[i] <= 'Z'){
			// a[i] += 32;
			a[i] -= 'A';
			a[i] += 'a';
		}
	}
	printf("%s\n", a);
	//int len = strlen(a);
	// for(int i=0; i < strlen(a);i++ ){
	// 	printf("%c", a[i]);
	// }
	return 0;
}