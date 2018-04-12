#include <cstdio>

int inttok(int num){
	int three, two, one;
	three = num/100;
	two = (num-three*100)/10;
	one = num-three*100-two*10;
	
	return three-two==two-one?1:0; 
}

int main(){
	int N,sum=99;
	scanf("%d", &N);
	if(N<=99){
		printf("%d\n", N);
	}else{
		for(int i=100;i<=N;i++){
			if(inttok(i)) sum++;
		}
		printf("%d\n", sum);
	}
}
