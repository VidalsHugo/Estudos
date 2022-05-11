#include <stdio.h>
 
int main() {
 
int N, i=0;
double media=0, soma=0;
 
 do{
	    scanf("%d", &N);
	    if(N>=0){
	    soma+=N;
	    i++;
	 }else{
	 	if(soma==0){
	 		break;
		 }
		else{
		media=soma/i;
		printf("%.2lf\n", media);
		}
	 }

 }while(N>=0);
 
    return 0;
}
