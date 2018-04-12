#define _CRT_SECURE_NOWARNINGS//prevent warnings
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char equation[6][20] = {"XY+XY'", "(X+Y)(X+Y')", "X+XY", "X(X+Y)", "(X+Y')Y", "XY'+Y"};
	char answer[6][5] = {"X", "X", "X", "X", "XY", "X+Y"};
	
	srand(time(NULL));

	int random;
	char fill[10];

	while(1){
		random = rand()%6;
		printf("QUESTION : %[^\n]s equals...?\n", equation[random]);
		scanf("%s", fill);
		int count = 0;
		while(fill[count] != '\0'){
			if(fill[count] >='a' && fill[count] <='z'){
				fill[count] += 'A'-'a';
			}
			count++;
		}
		if(!(strcmp(answer[random], fill))){
			printf("correct!\n=====================\n\n");
		}else{
			printf("the answer is %s\n=====================\n\n", answer[random]);
		}

	}
}