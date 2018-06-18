#include <cstdio>
#include <algorithm>

#define ITEMS 6

using namespace std;
int N, M;

int howmany(int a, int b){
	if(N<6)
		return min(a, N*b);
	
	if((N%ITEMS)==0)
		return min((N/ITEMS)*a, N*b);

	int tmp = min( ((N/ITEMS)+1) * a, (N/ITEMS)*a + (N%ITEMS)*b);
	return min(tmp, N*b);
}

int main(){
	int pac, unit, minpac, minunit;
	int res = minpac = minunit = 1000001;
	scanf("%d %d", &N, &M);

	for(int i=0;i<M;i++){
		scanf("%d %d", &pac, &unit);
		minpac = min(minpac, pac);
		minunit = min(minunit, unit);
	}
	res = min(res, howmany(minpac, minunit));
	printf("%d\n", res);

	return 0;
}