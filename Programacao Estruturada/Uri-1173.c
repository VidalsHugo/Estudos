#include <stdio.h>
 
int main() {
 
	 int N[10], i, total;

scanf("%d", &N[10]);
if(N[10]<=50){
	for(i=0;i<10;i++){
		printf("N[%i] = %d\n", i, N[10]);
		N[10]+=N[10];
	}
}
	
	return 0;
}

