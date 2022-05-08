#include <stdio.h>
#include <math.h>

int main() {
    
 double A, B, C, x1, x2, raiz;
 
   scanf("%lf %lf %lf", &A, &B, &C);
   
    if(A==0 || ((B*B)-4*A*C)<0)
   {
       printf("Impossivel calcular\n");
   }
    	else
   			{
   				raiz = sqrt((B*B)-4*A*C);
   				
   	 			x1 = (-B + raiz)/(A*2);
     			x2 = (-B - raiz)/(A*2);
   	
      			 printf("R1 = %.5lf\n", x1);
       			 printf("R2 = %.5lf\n", x2);
   			}
    return 0;
}
