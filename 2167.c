#include <stdio.h>
//#include <malloc.h>
int main(){
	int n, m;
	int arr[300][300];
	scanf("%d %d", &n, &m);
	// int **arr;
	// arr = (int **)malloc(sizeof(int*)*n);
	// for(int i=0; i<m;i++){
	// 	arr[i] = (int *) malloc(sizeof(int)*m);
	// }

	for(int i=0; i<n; i++){
		for(int j=0; j<m;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int k, result=0;
	int a,b,c,d;
	scanf("%d", &k);

	for(int i=0; i<k;i++){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for(int i=a-1;i<c;i++){
			for(int j=b-1;j<d;j++){
				result+=arr[i][j];
			}			
		}
		printf("%d\n", result);
		result = 0;
	}

	return 0;
}