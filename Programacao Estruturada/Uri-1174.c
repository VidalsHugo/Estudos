#include <stdio.h>
 
int main() {
 
	float A[100];
	int i=0;
	
	do{
		scanf("%f", &A[100]);
		if(A[100]<=10){
			printf("A[%d] = %.1f\n", i, A[100]);
			i++;
		}else{
			i++;
			continue;
		}
	}while(i<100);
 
    return 0;
}
