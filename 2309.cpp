#include <cstdio>
#include <algorithm>

using namespace std;

int arr[9]={0};

//sort(arr, arr+N개)
int main(){
	int sum=0;
	for(int i=0; i<9; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	for(int i = 0; i<8; i++){
		for(int j =i+1;j<9; j++){
			if((sum-arr[i]-arr[j])==100){
				arr[i]=arr[j]=0;
				sort(arr, arr+9);
				for(int i=0;i<7;i++){
					printf("%d\n", arr[i+2]);
				}
				return 0;
			}
		}
	}
	return 0;
}