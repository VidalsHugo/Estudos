#include <stdio.h>
 
int main() {
 
    int x, num, i, in, out;
 
 scanf("%d", &x);
 
 if(x<10000){
 	in=0;
 	out=0;
 for(i=1;i<=x;i++){
 	
     scanf("%d", &num);
     
     if(num<100000000 || num>-100000000)
         if(num>=10 && num<=20){
             in++;
}
             
             else if(num>20 || num<10){
                 out++;
             }
 }
 printf("%d in\n", in);
 printf("%d out\n", out);
}
 
    return 0;
}
