#include <cstdio>
#include <algorithm>

using namespace std;

int p[1001];
int sum[1001];

int main(){
	int T,total=0,i;
	scanf("%d", &T);
	for(i = 0; i<T; i++){
		scanf("%d", &p[i]);
	}

	sort(p, p+i);
	sum[0] = p[0];
	for(i=1; i<T; i++){
		sum[i] = p[i] + sum[i-1];
	}
	for(i = 0; i<T; i++){
		total += sum[i];
	}
	printf("%d\n", total);

	return 0;
}