#include <cstdio>

int arr[2200][2200];

void star(int x, int y, int size){
	//size 
	if(size == 1){
		// if(x%3 == 1 && y & 3 == 1){
		// 	arr[x][y] = 0;
		// }else{
		// arr[x][y] = 1;
		// }
		arr[x][y] = 1;
	}else{
		size /= 3;
		star(x, y, size);
		star(x, y + size, size);
		star(x, y + size*2, size);
		
		star(x + size, y, size);
		// star(x + size, y + size, size);
		star(x + size, y + size*2, size);
		
		star(x + size*2, y, size);
		star(x + size*2, y + size, size);
		star(x + size*2, y + size*2, size);

	}
}

int main(){
	int N;
	scanf("%d", &N);
	star(0, 0, N);
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			arr[i][j]==1?printf("*"):printf(" ");
		}
		printf("\n");
	}
}