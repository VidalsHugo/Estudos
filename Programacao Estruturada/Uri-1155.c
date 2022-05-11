#include <stdio.h>
 
int main() {
 
	double S, i=2;

	S+=1;
	do{
		S+=(1/i);
		i++;
	}while(i<=100);
	printf("%.2lf\n", S);
 
    return 0;
}
