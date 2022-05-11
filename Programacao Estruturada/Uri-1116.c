#include <stdio.h>
 
int main() {
    
	int N, i=1;
	float X, Y, d;
	
	scanf("%d", &N);
while(i<=N){
	scanf("%f %f", &X, &Y);
    d=X/Y;
    
    if(Y!=0){
    	printf("%.1f\n", d);
	}
    else if(Y==0){
    	printf("divisao impossivel\n");
	}
    i++;
}

    return 0;
}
