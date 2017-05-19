#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <math.h>
using namespace std;

int aaa(int arr[][4]){
	int result = 0;
		for(int i = 0 ; i < 4;  i++){
			while(true){
				if(arr[0][i] == arr[1][i]) break;

				if(arr[0][i] < 3) {
					arr[0][i] = arr[1][i];
				}else{
					arr[0][i] = arr[0][i]-3;
				}
				result++;
			}
		}
		return result;
}

int main(){
	int t;
	int arr[2][4];
	int r[4];
	for(scanf("%d",&t);t;t--){
		int start, end;

		scanf("%d %d", &start,&end);

		for(int i = 0 ; i < 4; i++){
			arr[0][i] = start/pow(10,3-i);
			start = start%(int)pow(10,3-i);
			
			arr[1][i] = end/pow(10,3-i);
			end = end%(int)pow(10,3-i);
		}

		int result = 0;

		int temp[2][4];
		for(int i = 0; i<2; i++){
			for(int j = 0; j<4; j++){
				temp[i][j] = arr[i][j];
			}
		}

		for(int i = 0; i<4; i++){
			arr[0][i] += 1;
			if(arr[0][i] > 9) arr[0][i] = 0;	
		}

		for(int i = 0; i<4; i++){
			temp[0][i] -= 1;
			if(temp[0][i] < 0) temp[0][i] = 9;	
		}

		int re = min(aaa(arr),aaa(temp));

		printf("%d\n",re+1);

	}
}

