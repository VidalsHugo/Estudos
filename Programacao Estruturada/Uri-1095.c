#include <stdio.h>
 
int main() {
 
   int i, I, J;
   
   J=60;
   I=1;
   do{
       printf("I=%d J=%d\n", I, J);
       I+=3;
       J-=5;
   }
   while(J>=0);
 
    return 0;
}
