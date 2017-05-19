#include <stdio.h>
int main(){
	int arr[8], a=1, d=8, total=0;
	for(int i=0;i<8;i++){
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	if(total != 36) return 0;
	for(int i=1;i<8;i++){
		if(arr[i]==arr[i-1]+1) a+=1;
		else if(arr[i]==arr[i-1]-1) d-=1;

	}
	if(a==8) printf("ascending\n");
	else if(d==1) printf("descending\n");
	else printf("mixed\n");

	return 0;
}