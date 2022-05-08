#include <stdio.h>
 
int main() {
 
int i, N, M, P, iM;

P=0;
for(i=1;i<=100;i++){
    scanf("%d", &N);
    if(N>P){
        M=N;
        iM=i;
        P=N;
    }
}
printf("%d\n", M);
printf("%d\n", iM);
 
    return 0;
}
