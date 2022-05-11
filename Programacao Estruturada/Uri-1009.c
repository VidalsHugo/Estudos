#include <stdio.h>
 
int main() {
 
 char nome[20];
 double salariofixo, totalvendas, montante;
 
 scanf("%s\n%lf\n%lf", &nome, &salariofixo, &totalvendas);
 
 montante = totalvendas*15/100 + salariofixo;
 
 printf("TOTAL = R$ %.2lf\n", montante);
 
    return 0;
}
