#include <stdio.h>
int main(){
	int n, m;
	char arr[101][101];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%s", arr[i]);
	}

	scanf("%d", &m);
	switch(m){
		case 1:
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
				printf("%c",arr[i][j]);
				}
				printf("\n");
			}
			break;
		

		case 2:
			for(int i=0;i<n;i++){
				for(int j=n-1;j>=0;j--){
					printf("%c", arr[i][j]);
				}
				printf("\n");
			}
			break;
		
		
		case 3:
			for(int i=n-1;i>=0;i--){
				for(int j=0;j<n;j++){
					printf("%c", arr[i][j]);
				}
				printf("\n");
			}
			break;
		
		
		default : 
			return 0;

	}

	return 0;
}