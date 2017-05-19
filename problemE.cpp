#include <cstdio>
#include <queue>
using namespace std;
typedef pair<int,int> ii;

int m, n, hole;
int map[1001][1001];
int chk[1001][1001];
ii holearr[1001]; //ii라는 타입변수의 이름을 holearr로 하고
            // 0 비워두고
            // 1 0 3 넣고
            // 2 2 0 넣을꺼야  
            //구멍 인덱스 입구는 신경쓰지않고 출구만 신경쓸꺼야
            // ex 0번째는 비워두고 1번째 0 3 2번째 2 0 이런식으로 
            // 출구로 다시 들어갈수없으니까 입구에 대한 출구의 인덱스
            // 만 기억하면 된다.
/*설계를 어떻게 할꺼냐면 
0 2 1 2   에서   0   1 -1 0
1 1 1 0         -1 -1 -1 0       
2 0 0 2         0   0  0 2
0 1 0 0         0  -1  0 0  이렇게 바꿀꺼야 */
/*또한 chk배열은 
1 2 0 3
0 0 0 4
6 7 6 5
7 0 7 6
*/ //이 배열은 5에서 남쪽 6에 끝나니까 6으로 나오고 나머지 
//6 두개 pop이 되고 7도 3개를 pop이 된다 
//5에서 queue에는 (2,0)(구덩이먼저) (3,3) (2,2) 하고 (2,1) (3,0) (3,2)
//물론 pop되겟지 다   끝!
int dir[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
int bfs(){
   queue<ii> q;
   chk[0][0] = 1;
   q.push({0,0});
   while(!q.empty()){
      ii pn = q.front();
      q.pop();
      int x = pn.first, y = pn.second;
      if (map[x][y] > 0) { //이말은 즉 구덩이를 만났을 때
         int xx = holearr[map[x][y]].first;  
         int yy = holearr[map[x][y]].second;  
         if (chk[xx][yy] == 0) { // chk[xx][yy] > 0이 아닐 때 
            chk[xx][yy] = chk[x][y] + 1;
            q.push({xx,yy});
         }
      }
      for(int i = 0; i < 4; i++){
         int xx = x + dir[i][0], yy = y + dir[i][1];
         if(xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
         if(map[xx][yy] < 0 || chk[xx][yy] > 0) continue;
         chk[xx][yy] = chk[x][y] + 1;
         q.push({xx,yy});
         //pop을 할때 chk를 하는게 아니라 push할때 chk배열을 올려준다.
      }   
   }
   return chk[m-1][n-1]-1; // 나오는 통로의 chk를 출력한다.
                     // 우린 체크를 1부터 했는데 
                     // 문제에서 0부터 시작하니까 -1을 해준다 
}

int main(){
   int T;
   for(scanf("%d", &T);T--;){
      scanf("%d %d", &m, &n);
      for(int i = 0; i < m; i++){
         for(int j = 0; j < n; j++){
            scanf("%d", &map[i][j]);
            chk[i][j] = 0;
            if(map[i][j] == 1) map[i][j] = -1;
            //1일때 -1로 바꿔준다 
         }
      }
      scanf("%d", &hole);
      for(int i = 1; i <= hole; i++){
         int sx, sy, ex, ey;
         scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
         map[sx][sy] = i; // 구덩이를 각각 1 2 3 으로 만들어준다.
         holearr[i] = {ex, ey}; // 각각 1 2 3에 해당하는 인덱스
      }
      printf("%d\n", bfs());
   }
   return 0;
}