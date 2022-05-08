#include <stdio.h>
 
int main() {
 
	int N, alc=0, gas=0, die=0, fim;
	
do{
	scanf("%d", &N);
	
	if(N==1){
		alc++;
	} else if(N==2){
		gas++;
	} else if(N==3){
		die++;
	} else if(N==4){
		break;
	}
	
} while(N!=4);
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n", alc);
printf("Gasolina: %d\n", gas);
printf("Diesel: %d\n", die);
 
    return 0;
}
