#include <stdio.h>
 
int main() {
    
 double N;
 int a, b;

scanf("%lf", &N);

a=N;
N=(N-a)*100;
b=N;

printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", a/100);
a%= 100;
printf("%d nota(s) de R$ 50.00\n", a/50);
a%= 50;
printf("%d nota(s) de R$ 20.00\n", a/20);
a%= 20;
printf("%d nota(s) de R$ 10.00\n", a/10);
a%= 10;
printf("%d nota(s) de R$ 5.00\n", a/5);
a%= 5;
printf("%d nota(s) de R$ 2.00\n", a/2);
a%=2;
printf("MOEDAS:\n");     
printf("%d moeda(s) de R$ 1.00\n", a);
b%= 100;
printf("%d moeda(s) de R$ 0.50\n", b/50);
b%= 50;
printf("%d moeda(s) de R$ 0.25\n", b/25);
b%= 25;
printf("%d moeda(s) de R$ 0.10\n", b/10);
b%= 10;
printf("%d moeda(s) de R$ 0.05\n", b/5);
b%= 5;
printf("%d moeda(s) de R$ 0.01\n", b);

    return 0;
}
