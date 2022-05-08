#include <stdio.h>
 
int main() {
 
 int distancia;
 float combustivel, total;
 
scanf("%d\n %f", &distancia, &combustivel);

total = distancia/ combustivel;

printf("%.3f km/l\n", total);
 
    return 0;
}
