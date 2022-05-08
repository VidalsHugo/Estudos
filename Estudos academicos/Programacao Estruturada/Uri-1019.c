#include <stdio.h>
 
int main() {
 
	int N, horas, minutos, segundos;
	
	scanf("%d", &N);
	
	horas = (N/60) / 60;
	
	minutos = (N/60) %60;
	
	segundos = N%60;
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
 
    return 0;
}
