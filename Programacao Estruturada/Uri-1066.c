#include <stdio.h>
 
int main() {
 
 int num, i, val1, val2, val3, val4;
 
 val1=0;
 val2=0;
 val3=0;
 val4=0;
 for(i=1;i<=5;i++){
     scanf("%d", &num);
     
     if(num%2==0){
         val1+=1;
    }
   if(num%2!=0){
        val2+=1;
  } 
  if(num>0){
      val3+=1;
  }
  if(num<0){
      val4+=1;
   }
  }
  printf("%d valor(es) par(es)\n", val1);
  printf("%d valor(es) impar(es)\n", val2);
  printf("%d valor(es) positivo(s)\n", val3);
  printf("%d valor(es) negativo(s)\n", val4);
 
    return 0;
}
