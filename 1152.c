#include <stdio.h>
#include <string.h>
int main(){


	char str[1000001];

	

	char* tok;
	int cnt=0;

	scanf("%[^\n]s", str);

	tok = strtok(str," \t");

	while(tok != NULL){
		cnt++;
		
		tok = strtok(NULL, " \t");
		
	}
	printf("%d", cnt);
	return 0;
}