#include <stdio.h>
	
int arr[999][999];

int main(){
	int E = 0, W = 0, S = 0, N = 0;
	int n, position, x=0, y=0, i=0, j=0;
	
	scanf("%d %d", &n, &position);
	if(n%2==0) return 0;
	
	int max = n*n, start = 0, end = n;
	
	arr[i][j] = max;
	max--;
	S = 1;
	while(max != 0){
		if(S){
			i++;
			if(i+1 >= end){
				S = 0;
				E = 1;
			}
		}else if(E){
			j++;
			if(j+1>=end){
				E = 0;
				N = 1;
				end--;
			}
		}else if(N){
			i--;
			if(i-1<start){
				N = 0;
				W = 1;
			}
		}else if(W){
			j--;
			if(j-1<=start){
				W = 0;
				S = 1;
				start++;
			}
		}
		arr[i][j] = max;
		max--;
		if(position == max+1){
			x = i;
			y = j;
		}
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0; j< n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("%d %d", x+1, y+1);
	return 0;
}



#include <cstdio>

int map[1000][1000];
int main(){
   int n, find, d = 0, x = 0, y = 0;
   scanf("%d %d", &n, &find);
   int N = n*n;
   int dir[4][2] = {{1,0}, 
   					{0,1}, 
   					{-1,0}, 
   					{0,-1}};
   while(N--){
      map[x][y] = N+1;
      int xx = x + dir[d][0];
      int yy = y + dir[d][1];
      if(xx >= n || xx < 0 || yy >= n || yy < 0 || map[xx][yy] > 0){
         d = (d+1)%4;
         xx = x + dir[d][0];
         yy = y + dir[d][1];
      }
      x = xx, y = yy;
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++) printf("%d ", map[i][j]);
      printf("\n");
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         if(map[i][j] == find) printf("%d %d\n", i+1, j+1);
      }
   }
   return 0;
}