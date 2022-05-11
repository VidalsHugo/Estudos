#include <stdio.h>
 
int main() {
 
 	int N, X, i=1, Y=0, j;
	
	scanf("%d", &N);
	if(N>=1 && N<=20){
		while(i<=N){
			scanf("%d", &X);
			for(j=1;j<X;j++){
				if(X%j==0){
					Y+=j;
				}else{
					continue;
				}
			}
			if(Y==X){
				printf("%d eh perfeito\n", X);
			}else{
				printf("%d nao eh perfeito\n", X);
			}
			
			
			Y=0;
			i++;
		}
	}
 
    return 0;
}
