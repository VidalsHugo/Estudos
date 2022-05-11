#include <stdio.h>
 
int main() {
	
   double  A, B, C;
    double areaT, areaC, areaTrp, areaTrp1, areaQ, areaR;
    double pi = 3.14159;
    
    scanf("%lf %lf %lf",&A, &B, &C);
    
    areaT = (A * C) / 2;
    
    areaC = pi * (C*C);
    
    areaTrp = ((A+B)*C)/2;
    
    areaQ = B * B;
    
    areaR = A * B;
    
    printf("TRIANGULO: %.3lf\n", areaT);
    printf("CIRCULO: %.3lf\n", areaC);
    printf("TRAPEZIO: %.3lf\n", areaTrp);
    printf("QUADRADO: %.3lf\n", areaQ);
    printf("RETANGULO: %.3lf\n", areaR);
    
    return 0;
}
