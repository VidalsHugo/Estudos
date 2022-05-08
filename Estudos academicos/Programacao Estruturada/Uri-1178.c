#include <stdio.h>
 
int main() {
 
	double X;
	int N[100], i;
	
	scanf("%lf", &X);
	
	for(i=0;i<100;i++){
		printf("N[%d] = %.4lf\n", i, X);
		X/=2;
	}
 
    return 0;
}
