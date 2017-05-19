#include <stdio.h>
/*float add(int a, int b){
	return printf("%d\n",a+b);
}

void printWorld(){
	printf("Hello World\n");
}

int func(int n){
	if(n<0) return 0;
	return n+func(n-1);
}

int main(){
	add(1,2);
	printWorld();
	printf("%d", func(5));
}*/


/*int facto(int N){
	if(N<=0) return 1;
	return N*facto(N-1);
}

int main(){
	int i;
	scanf("%d", &i);
	printf("%d", facto(i));

	return 0;
}*/

/*int cache[10001];
int func(int n){
	if(n<= 1){
		cache[n] = 1;
		return cache[n]
	}
	cache[n] = n * cache[n-1];
	return cache[n];
	}
}
*/

/*
//fibonacci DP version
int cache[10001];
int fibo(int n){
	cnzero=0, cnone = 0, cache[10001]=0;
	if(n==0){
		cache[n] = 0;
		
		return cache[n];
	}else if(n==1){
		cache[n] = 1;
		
		return cache[n];
	}else{
		cache[n] = cache[n-1] + cache[n-2];
		return cache[n];
	}
}*/

/*
//#1003
int cntzero, cntone;
int fibonacci(int n) {
    if (n==0) {
    	cntzero++;
        return 0;
    } else if (n==1) {
    	cntone++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
	int num, j;
	scanf("%d", &num);
	for(int i = 0; i<num;i++){
		scanf("%d", &j);
		cntzero=0, cntone=0;
		fibonacci(j);
		printf("%d %d\n", cntzero, cntone);
	}
	
}*/

//#4673
// int selfNumber(int n){
// 	int arr[n+1];
// 	for(int i=0; i<=n;i++){
// 		arr[i] = i;
	



int cache[10001]={0};
int d(int n){
	int result = n;
	

	while(n>0){
			result += n%10;
			n /= 10;
	}
	// printf("%d\n", result);
	if(result < 10000){
		cache[result]++;
	}
}

int main(){
	
	for(int i = 1; i<10000; i++){
		d(i);
	}
	for(int i=1; i<10000;i++){
		if(cache[i]==0) printf("%d\n", i);
	}
	return 0;
}