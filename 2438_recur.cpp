#include <cstdio>
using namespace std;

void starring(int a, int b){
	if(b!=0){
		starring(b, 0);	//1
	}else if(a!=b && b==0){
		printf("*");
		starring(a-1, b);//2
	}else if(a==0 && b==0){
		printf("\n");//3
	}
	if(a==b) return;
	else if(b!=0) starring(a, b+1);//4
}

int main(){
	int n=0;
	scanf("%d", &n);
	starring(n, 1);
	return 0;
}




/*

#include <cstdio>
// star(a, b)
// a: 현재 라인에 별을 몇개 더 찍어야 하는가
// b: 현재 라인이 몇 번째인가
void star(int a, int b) {
	if (a == 0) {
		if (b == 0) return;
		printf("*\n"); return;
	}
	if (a == b) {
		star(a-1, b-1);
		return star(a-1, b);
	}
	printf("*");
	return star(a-1, b);
}
// star1(a, b, c)
// a: 현재 라인에 별이 몇개 찍혔는가
// b: 현재 라인에 최대 몇개 찍여야 하는가
// c: 최대 라인은 몇인가
void star1(int a, int b, int c) {
	if (a == b) {
		printf("\n");
		if (b == c) return;
		return star1(0, b+1, c);
	}
	printf("*");
	return star1(a+1, b, c);
}
int main() {
	int n;
	scanf("%d", &n);
	// star(n, n);
	// star1(0, 1, n);
	return 0;
}

*/