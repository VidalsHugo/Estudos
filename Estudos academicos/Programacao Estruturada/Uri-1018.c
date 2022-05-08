#include <stdio.h>
 
int main() {
 

    int A;

    scanf("%i", &A);
    
    printf("%i\n", A);
    
    printf("%i nota(s) de R$ 100,00\n", A/100);
    A %= 100;
    printf("%i nota(s) de R$ 50,00\n", A/50);
    A %= 50;
    printf("%i nota(s) de R$ 20,00\n", A/20);
    A %= 20;
    printf("%i nota(s) de R$ 10,00\n", A/10);
    A %= 10;
    printf("%i nota(s) de R$ 5,00\n", A/5);
    A %= 5;
    printf("%i nota(s) de R$ 2,00\n", A/2);
    A %= 2;      
    printf("%i nota(s) de R$ 1,00\n", A);
 
    return 0;
}
