#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	unsigned long int T, R1, R2, i, soma=0;
	
	scanf("%lu", &T);
	
	for(i=1;i<=T;i++){
		scanf("%lu %lu", &R1, &R2);
		soma=R1+R2;
		printf("%lu\n", soma);
	}
	
	return 0;
}
