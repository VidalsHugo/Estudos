#include <stdio.h>
 
int main() {
 
int N, X=1, i=1;

scanf("%d", &N);

do{
    printf("%d ", X);
    printf("%d ", X+1);
    printf("%d", X+2);
    X+=4;
    printf(" PUM\n");
    i++;
} while(i<=N);
 
    return 0;
}
