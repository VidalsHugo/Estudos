#include <stdio.h>
 
int main() {
 
	 int X, Y;
 
 	     do{
         scanf("%d %d", &X, &Y);
         if(X>Y){
             printf("Decrescente\n");
         }
         else if(X<Y){
             printf("Crescente\n");
         }
         else{
         	break;
		 }
     }while(X!=Y);
 
    return 0;
}
