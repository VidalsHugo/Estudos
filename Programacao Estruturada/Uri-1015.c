#include <stdio.h>
#include <math.h>

int main() {
 
   float x1, x2, y1, y2, distancia, distancia1;
   
   scanf("%f %f\n%f %f", &x1, &y1, &x2, &y2);
 
 distancia1 = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
 distancia = sqrt(distancia1);
 
 printf("%.4f\n", distancia);
 
 
    return 0;
}
