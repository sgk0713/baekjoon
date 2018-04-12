#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>

using namespace std;

int main(){
	deque<int> dq;
	int T=0;

	for(scanf("%d\n", &T);T;--T){
		char input[20] = {0};
		scanf("%[^\n]s\n", input);
		getchar();

		switch(input[1]){
			case 'u'://push, push_front, push_back
				if(input[5] == 'f'){
					dq.push_front(atoi(input+11));
				}else{
					dq.push_back(atoi(input+10));
				}
				break;
			case 'o'://pop, pop_front, pop_back
				if(dq.empty()){
					printf("-1\n");
				}else if(input[4]=='f'){
					printf("%d\n", dq.front());
					dq.pop_front();
				}else{
					printf("%d\n", dq.back());
					dq.pop_back();
				}
				break;
			case 'i'://size
				printf("%lu\n", dq.size());
				break;
			case 'm'://empty
				dq.empty()? printf("1\n"): printf("0\n");
				break;
			case 'r'://front
				dq.empty()? printf("-1\n"): printf("%d\n", dq.front());
				break;
			case 'a'://back
				 dq.empty()? printf("-1\n"): printf("%d\n", dq.back());
				break;

		}
	}

}