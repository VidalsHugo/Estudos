#include <stdio.h>
 
int main() {

	int N, i, X, Y, j=1, imp=0;

scanf("%d", &N);
for(i=1;i<=N;i++){
    scanf("%d %d", &X, &Y);
    
    do{
    	if(X%2!=0){
    		imp+=X;
    		X++;
    		j++;
		}else{
			X++;
			continue;
		}
	}while(j<=Y);
    printf("%d\n", imp);
    imp=0;
    j=1;
}
 
    return 0;
}
