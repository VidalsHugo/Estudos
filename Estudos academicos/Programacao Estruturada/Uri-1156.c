#include <stdio.h>
 
int main() {
 
	double S, i=2, j=3;

	S+=1;
	do{
		S+=(j/i);
		i*=2;
		j+=2;
	}while(j<=39);
	printf("%.2lf\n", S);
 
    return 0;
}
