#include <stdio.h>
 
int main() {
 
 int NumFunc, HrsTrab;
 float ValorPorHora, Salario;
 
 scanf("%i\n%i\n%f", &NumFunc, &HrsTrab, &ValorPorHora);
 
 Salario = ValorPorHora * HrsTrab;
 
 printf("NUMBER = %i\nSALARY = U$ %.2f\n", NumFunc, Salario);
 
    return 0;
}
