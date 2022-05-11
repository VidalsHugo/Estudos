#include <stdio.h>
 
int main() {
 
   int Cod, Num, Cod2, Num2;
   float ValorUnit, ValorUnit2, total;
   
   scanf("%d %d %f", &Cod, &Num, &ValorUnit);
   scanf("%d %d %f", &Cod2, &Num2, &ValorUnit2);
   
   total = ValorUnit*Num + ValorUnit2*Num2;
 
   printf("VALOR A PAGAR: R$ %.2f\n", total);
 
 
    return 0;
}
