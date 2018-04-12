#include <cstdio>

int main(){
	int N= 10;
	int arr[10] = {1, 2, 5, 6, 7, 11, 23, 43, 51, 66};
	int left = 0, right = 9;


	int k = 5;

	while(left <= right){
		int mid = (left + right)/2;
		if(arr[mid] == k){
			printf("found %d in %d\n", k, mid);
			break;
		}else if(arr[mid] < k){
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	return 0;
}