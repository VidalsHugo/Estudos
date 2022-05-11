#include <stdio.h>
 
int main() {
 
	int N, ano=0, i, cont=1, PA, PB;
	double G1, G2, pG1, pG2;
	
	scanf("%d", &N);
	do{
		scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
			do{
				pG1=(G1*PA)/100;
				pG2=(G2*PB)/100;
				
				PA+=pG1;
				PB+=pG2;
				ano++;
				if(ano>100){
					printf("Mais de 1 seculo.\n");
					break;
				}else if(ano<=100){
					continue;
				}
			}while(PA<=PB);
			if(ano<=100){
				printf("%d anos.\n", ano);
			}
				
		ano=0;
		cont++;
   	
}while(cont<=N);
 
    return 0;
}
