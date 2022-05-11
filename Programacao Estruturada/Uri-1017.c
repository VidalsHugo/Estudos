#include <stdio.h>
 
int main() {

 double gasto, gasto1, tempo, velM;
 
 scanf("%lf\n%lf", &tempo, &velM);
 
 gasto1 = velM / 12;
 gasto= gasto1 * tempo;
 
 printf("%.3lf\n", gasto);
 
 
    return 0;
}
