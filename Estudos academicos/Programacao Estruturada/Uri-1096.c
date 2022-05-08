#include <stdio.h>
 
int main() {
 
   int i, I, J;
   
   J=7;
   I=1;
   do{
       printf("I=%d J=%d\n", I, J);
       printf("I=%d J=%d\n", I, J-1);
       printf("I=%d J=%d\n", I, J-2);
       I+=2;
       J=7;
   }
   while(I<=9);
 
    return 0;
}
