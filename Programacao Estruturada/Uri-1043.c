#include <stdio.h>
 
int main() {
 
 double A, B, C, soma1, soma2;
 
 scanf("%lf %lf %lf", &A, &B, &C);
 
 if ((A+B)>C && (B+C>A) && (C+A>B))
 {
 	soma1=A+B+C;
 	printf("Perimetro = %.1lf\n", soma1);
 }

 else {
 	soma2=((A+B)*C)/2;
 	printf("Area = %.1lf\n", soma2);
 }
    
    return 0;
}
