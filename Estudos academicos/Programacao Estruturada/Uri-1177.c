#include <stdio.h>
 
int main() {
 
	int T, N[1000], i, j;
	
	scanf("%d", &T);
	
	for(i=0, j=0;i<1000, j<=(T-1);i++){
		
		printf("N[%d] = %d\n", i, j);
		
		if(j==(T-1)){
			j=0;
			continue;
		}if(i==999){
			break;
		}
		j++;
	}
 
    return 0;
}
