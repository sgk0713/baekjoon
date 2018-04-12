#include <cstdio>
#include <queue>
#include <cmath>
using namespace std;

typedef pair<int, int> ii;
typedef pair<ii, ii> jj;

int D(int num){return ((2*num)<9999)? 2*num : (2*num)%10000;}
int S(int num){return num==0?9999:num-1;}
int L(int num){return num/1000+num%1000*10;}
int R(int num){return num/10+num%10*1000;}

int A, B;
unsigned int countNum, direcNum;

void check(){
	queue<jj> q;
	unsigned int dir = 0, cnt = 0;
	q.push(jj(ii(A, B), ii(cnt, dir)));
	while(!q.empty()){
		int begin = q.front().first.first;
		int cnt = q.front().second.first;
		int dir = q.front().second.second;
		q.pop();
		if(begin == B){
			countNum = cnt;
			direcNum = dir;
			printf("2:cnt%d dir%u\n", cnt, dir);
			while(!q.empty()) q.pop();
			return;
		}
		// else if(countNum != 0 && countNum < cnt){
		// 	while(!q.empty()) q.pop();
		// 	break;
		// }
		q.push(jj(ii(D(begin), B), ii(cnt+1, dir*10+1)));
		q.push(jj(ii(S(begin), B), ii(cnt+1, dir*10+2)));
		if(dir%10 != 4) q.push(jj(ii(L(begin), B), ii(cnt+1, dir*10+3)));
		if(dir%10 != 3) q.push(jj(ii(R(begin), B), ii(cnt+1, dir*10+4)));
	}
}

int main(){
	int T, i;
	for(scanf("%d", &T); T--;){
		A = B = countNum = direcNum = 0;
		scanf("%d %d", &A, &B);
		check();
		char direction[100]={};
		i = 0;
		printf("countNum %u, direcNum/((unsigned int)pow(10, countNum)): %u\n", countNum, direcNum/((unsigned int)pow((unsigned int)10, countNum)));
		while(countNum--){
			switch(direcNum/((unsigned int)pow(10, countNum))){
				case 1:
					direcNum -= (int)pow(10, countNum);
					direction[i]='D';
					break;
				case 2:
					direcNum -= 2*(int)pow(10, countNum);
					direction[i]='S';
					break;
				case 3:
					direcNum -= 3*(int)pow(10, countNum);
					direction[i]='L';
					break;
				case 4:
					direcNum -= 4*(int)pow(10, countNum);
					direction[i]='R';
					break;
			}
			i++;
		}
		printf("%s\n", direction);	
	}
	return 0;
}