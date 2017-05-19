#include <stdio.h>
#include <stdbool.h>
int main(){
   int n, num, cnt=0;
   
   scanf("%d", &n);//몇개의 숫자를 입력할것인지 입력
   if(n>100) return 0;
   

   for(int i=0; i<n; i++){//입력된 숫자만큼 반복 
      scanf("%d", &num);

      if(num>1001){
         printf("insert numbers below 1000\n");//1000이상 수가 입력되면 프로그램 종료
         return 0;
      }

      bool PrimeArray[num+1];//입력된 수만큼의 배열생성
      for(int i=0; i<=num; i++) PrimeArray[i]=true;//배열을 전부 true로 바꿈 
      PrimeArray[0] = false;//0과 1은 소수가 아니므로 false로 지정
      PrimeArray[1] = false;

      for(int j=2;j*j <= num; j++){//첫번째 제일작은수는 소수로 가정하여 소수로 지정 true값 반환 
         PrimeArray[j] = true;
         for(int k=j*j; k<=num; k += j){//그 이상의 배수들은 소수가 아니므로 false로 지정
            PrimeArray[k] = false;
         }
      }
      if(PrimeArray[num]) cnt++;//값이 true면 소수이므로 카운트 하나를 올림

      
   }
   printf("%d", cnt);
   return 0;
}