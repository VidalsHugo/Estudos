#include <stdio.h>
 
int main() {
 
	int A, N, i, soma=0;
	
	scanf("%d", &A);
	do{
			scanf("%d", &N);
	}while(N<=0);
	
		for(i=1;i<=N;i++){
			soma+=A;
			A++;
		}
		printf("%d\n", soma);
 
    return 0;
}
