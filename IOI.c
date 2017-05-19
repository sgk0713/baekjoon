#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
   int t=0;
   char p[1000]="";
   char ioi[1000]="";
   scanf("%d",&t);
   int n=0;
   int m=0;
   int cnt=0;      
   int i , j, k, l ,q;
   
   for(i =0; i<t;i++){
      scanf("%d", &n);
      int score=0;
      for(j =0; j<((2*n)+1); j++){
         if(j%2==0){
            p[j] = 'I';
         }
         else{
            p[j] = 'O';
         }
      }
      scanf("%d", &m);
      for(k = 0; k<=m; k++){
         scanf("%c", &ioi[k]);
      }
       
      for(l=0; l<m;l++){
         for(q=1; p[q-1]!='\0'; q++){
            if(p[cnt]==ioi[l+q])
               cnt++;
         }
         
         if(cnt==strlen(p)){
            score++;
            cnt=0;
         }
         else{
            cnt=0;
         }      
      }
      printf("%d\n", score);
   }
}