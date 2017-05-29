#include <stdio.h>
int main(){
	char arr[50][50];
	char ex[250][250];
	int a,b,c,d;
	int cnt=0;
	int temp;
	scanf("%d %d %d %d", &a,&b,&c,&d);
	int limit=c;
	for(int i=0; i<a;i++){

		for(int j=0; j<b;j++){
			scanf("%1s", &arr[i][j]);
			cnt = i*c;
			temp = j*d;
			while(cnt != limit){
				for(int k = temp; k < (temp+d); k++){
					ex[cnt][k] = arr[i][j];
				}
				cnt++;
			}
		}
		limit += c;
	}


	printf("\n");
	for(int i=0; i<(a*c);i++){
		for(int j=0;j<(b*d);j++){
			printf("%c", ex[i][j]);
		}
		printf("\n");
	}
	return 0;
}