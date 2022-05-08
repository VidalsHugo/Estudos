#include <stdio.h>
 
int main() {
 
	int j, i=0, N[20];
	
		for(i=0;i<20;i++){
			scanf("%d", &N[i]);
		}
		for(i=0, j=19;i<20, j>=0;i++,j--){
			printf("N[%d] = %d\n", i, N[j]);
			
		}
 
    return 0;
}
