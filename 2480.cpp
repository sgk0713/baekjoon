#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
	int num[3]={};
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	
	sort(num, num+3);

	if(num[0]==num[1] && num[1]== num[2]){
		printf("%d\n", 10000+num[0]*1000);
	}else if(num[0]==num[1]){
		printf("%d\n", 1000+num[0]*100);
	}else if(num[1]==num[2]){
		printf("%d\n", 1000+num[1]*100);
	}else {
		printf("%d\n", num[2]*100);
	}
	return 0;
}