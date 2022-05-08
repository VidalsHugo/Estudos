#include <stdio.h>
 
int main() {
	
	  int N, M, i, soma=0;

for(i=1;i>0;i++){
			scanf("%d %d", &M, &N);
	if(M>0 && N>0){
	 if(M>N){
		while(N<=M){
			printf("%d ", N);
			soma+=N;
			N+=1;
		 }
		 printf("Sum=%d\n", soma);
		 soma=0;
		}
		else if(N>M){
			while(M<=N){
				printf("%d ", M);
				soma+=M;
				M+=1;
			}
			printf("Sum=%d\n", soma);
			soma=0;
		}
  	 }
  	 else{
  	 	break;
	   }

}
    return 0;
}
