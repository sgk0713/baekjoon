#include <stdio.h>
int main(){
	int Min, Max;
	scanf("%d %d", &Min, &Max);//최소범위와 최대범위 입력
	int PrimeArray[Max+1];//최대범위까지 배열 생성
	for(int i=2; i<=Max; i++)	PrimeArray[i] = i;//각 배열에 해당되는 값을 입력
	PrimeArray[0] = 0;//0과1은 소수가 아니므로 0으로 지정
	PrimeArray[1] = 0;

	for(int i = 2;i*i <= Max; i++){//최대를 넘지 않는 제곱만큼 반복
		for(int j= i*i; j<=Max; j+=i){//최소값을 제외한 배수들은 0으로 입력하여 소수가 아님을 표현
			PrimeArray[j] = 0;
		}
	}
	for(int i=Min; i<=Max; i++){//최소범위부터 최대범위까지 0인지 스캔하여 출력
		if(PrimeArray[i]!= 0) printf("%d\n", PrimeArray[i]);
	}
	return 0;
}