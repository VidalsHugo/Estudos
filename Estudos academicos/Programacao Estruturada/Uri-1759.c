#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int N, i;
	
	scanf("%d", &N);
	
	for(i=1;i<=N;i++){
		printf("Ho");
		if(i!=N){
			printf(" ");
		}else if(i=N){
			printf("!\n");
		}
	}
	
	return 0;
}
