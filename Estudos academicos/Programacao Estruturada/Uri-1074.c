#include <stdio.h>
 
int main() {
 
  	int N, i, X;
   
   scanf("%d", &N);
   
   if(N<10000){
       for(i=1;i<=N;i++){
           scanf("%d", &X);
           
           if(X%2==0 && X>0){
               printf("EVEN POSITIVE\n");
           }
           else if(X%2==0 && X<0){
               printf("EVEN NEGATIVE\n");
           }
           else if(X%2!=0 && X>0){
               printf("ODD POSITIVE\n");
           }
           else if(X%2!=0 && X<0){
               printf("ODD NEGATIVE\n");
           }
           else if(X==0){
               printf("NULL\n");
           }
       }
   }
 
    return 0;
}
