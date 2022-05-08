#include <stdio.h>
 
int main() {
 
int cod, qnt;
float custo;

scanf("%d %d", &cod, &qnt);


if(cod == 1)
{
    custo = 4.00 * qnt;
    printf("Total: R$ %.2f\n", custo);
}
if(cod == 2)
{
    custo = 4.50 * qnt;
    printf("Total: R$ %.2f\n", custo);
}
if(cod == 3)
{
    custo = 5.00 * qnt;
    printf("Total: R$ %.2f\n", custo);
}
if(cod == 4)
{
    custo = 2.00 * qnt;
    printf("Total: R$ %.2f\n", custo);
}
else if (cod == 5)
{
    custo = 1.50 * qnt;
    printf("Total: R$ %.2f\n", custo);
}
 
    return 0;
}
