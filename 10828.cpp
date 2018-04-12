#include <iostream>
#include <vector>
#include <stack>
#include <cstdlib>

using namespace std;

int main(){
	stack<int> st;
	int T=0;

	for(scanf("%d\n", &T);T;--T){
		char input[20] = {0};
		scanf("%[^\n]s\n", input);ㅏ
		getchar();

		switch(input[1]){
			case 'u'://push
				st.push(atoi(input+5));
				break;

			case 'o'://pop || top
				if(st.empty()){
					printf("-1\n");
				}else if(input[0]=='p'){//pop
					printf("%d\n", st.top());
					st.pop();
				}else if(input[0]=='t'){//top
					printf("%d\n", st.top());
				}
				break;

			case 'i'://size
				printf("%lu\n", st.size());
				break;

			case 'm'://empty
				st.empty()? printf("1\n"): printf("0\n");
				break;
		}
	}

}