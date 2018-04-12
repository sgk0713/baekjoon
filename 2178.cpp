#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;


typedef pair<int, int> ii;//pair는 객체이기때문에 생성자가 필요하다. 원래는 make_pair를 써야한다.

int main(){
	int arr[101][101];
	int N, M;

	scanf("%d%d", &N, &M);

	for(int i = 0; i<N; i++){
		for(int j= 0; j<M; j++){
			scanf("%1d", &arr[i][j]);//하나씩 입력받는다
		}
	}
	int dir[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}}//4방향이고 좌표는 2개, 남->동->북->서
	/*
		 1, 3
	2, 2 2, 3 2, 4
		 3, 3

	*/
	queue<ii> q;
	int check[101][101];//0이 답이 될수도있기때문에 -1로 초기화함
	memset(check, -1, sizeof(check));//-1이 아닌 값은 한번이라도 간 곳이기때문에 건들지 않는다

	check[0][0] = 1;
	q.push(ii(0, 0));
	while(!q.empty()){
		int x, y;
		x = q.front().first;
		y = q.front().second;

		q.pop();

		for(int i = 0; i< 4; i++){
			int xx = x + dir[i][0];
			int yy = y + dir[i][1];
			
			if(xx< 0 || xx>=N || yy<0 || yy>= M) continue;
			if(arr[xx][yy] == 0 || check [xx][yy] != -1) continue;

			check[xx][yy] = check[x][y] + 1;

			q.push(ii(xx, yy));
		}
	}
	printf("%d\n", check[N-1][M-1]);
	

	return 0;


}