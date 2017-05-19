#include <stdio.h>
int main(){
	for(int j=2; j<=9; j=j+3){	
		for(int i=1; i<=9; i++){
			printf("%d * %d = %d\t", j, i, i*j);
			printf("%d * %d = %d\t", j+1, i, (j+1)*i);
			if(j<8) printf("%d * %d = %d\n", j+2, i, (j+2)*i);
			else printf("\n");
		}
		printf("\n");
	}
	return 0;
}