#include <stdio.h>
int main(){
	int arr[100][100]={0};
	int a,b,c,d;
	int maxone=0, maxtwo=0, minone=99,mintwo=99;
	int result=0;
	for(int T=0;T<4;T++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(maxone<c) maxone = c;
		if(maxtwo<d) maxtwo = d;
		if(minone>a) minone = a;
		if(mintwo>b) mintwo = b;
		for(int i=a-1; i<c-1;i++){
			for(int j=b-1; j<d-1;j++){
				arr[i][j]=1;
			}
		}

	}
	for(int i = minone-1;i<maxone;i++){
		for(int j = mintwo-1;j<maxtwo;j++){
			result += arr[i][j];
		}
	}
	printf("%d\n", result);

	return 0;
}