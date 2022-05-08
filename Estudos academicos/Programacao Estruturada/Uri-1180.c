#include <stdio.h>
 
int main() {
 
	int i, menor_num=999, menor_pos, N;
	
	scanf("%d", &N);
	
	int X[N];
	
	for(i=0;i<N;i++){
		scanf("%d", &X[i]);

		if(X[i]<menor_num){
			menor_num=X[i];
			menor_pos=i;
		}
	}
	printf("Menor valor: %d\n", menor_num);
	printf("Posicao: %d\n", menor_pos);
 
    return 0;
}
