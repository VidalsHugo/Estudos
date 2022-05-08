#include <stdio.h>
 
int main() {
 
	int N, X, i=1, Y=0, j;
	
	scanf("%d", &N);
	if(N>=1 && N<=100){
		while(i<=N){
			scanf("%d", &X);
			if(X>1 && X<=100000000){
				for(j=1;j<=X;j++){
					
				if(X%j==0){
					Y++;
				}else{
					continue;
				}
			}
			
			}
			if(Y==2){
				printf("%d eh primo\n", X);
			}else{
				printf("%d nao eh primo\n", X);
			}
			Y=0;
			i++;
		}
	}
    return 0;
}
