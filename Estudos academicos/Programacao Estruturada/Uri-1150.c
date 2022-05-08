#include <stdio.h>
 
int main() {
 
	int X, somaZ=0, Z, soma=0, i;
	
	scanf("%d", &X);
	
	do{
		scanf("%d", &Z);
		if(Z>somaZ){
			somaZ=Z;
		}
	}while(Z<=X);
	
	for(i=1;i>0;i++){
		soma+=X;
		X++;
		if(soma>Z){
			break;
		}
	}
	printf("%d\n", i);
    return 0;
}
