#include <stdio.h>
 
int main() {
 
 int N, i, tab;
 
 scanf("%d", &N);
 
 if(N>2 && N<1000){
     for(i=1;i<=10;i++){
         tab=i*N;
         printf("%d x %d = %d\n", i, N, tab);
     }
 }
 
    return 0;
}
