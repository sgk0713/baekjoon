#include <iostream>
#include <vector>
#include <queue>
#include <cstdlib>

using namespace std;

int main(){
	queue<int> q;
	int T=0;

	for(scanf("%d\n", &T);T;--T){
		char input[20] = {0};
		scanf("%[^\n]s\n", input);
		getchar();

		switch(input[1]){
			case 'u'://push
				q.push(atoi(input+5));
				break;
			case 'o'://pop
				if(q.empty()){
					printf("-1\n");
				}else{
					printf("%d\n", q.front());
					q.pop();
				}
				break;

			case 'i'://size
				printf("%lu\n", q.size());
				break;

			case 'm'://empty
				q.empty()? printf("1\n"): printf("0\n");
				break;
			case 'r'://front
				q.empty()? printf("-1\n"): printf("%d\n", q.front());
				break;

			case 'a'://back
				 q.empty()? printf("-1\n"): printf("%d\n", q.back());
				break;

		}
	}

}