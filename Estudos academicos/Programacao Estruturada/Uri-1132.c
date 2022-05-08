#include <stdio.h>
 
int main() {
 
	int i, X, Y, soma=0;
	
	scanf("%d %d", &X, &Y);
	
	if(X>Y){
		for(i=Y;i<=X;i++){
			if(i%13!=0){
				soma+=i;
			} else {
				continue;
			}
		}	
	}
	else if(X<Y){
		for(i=X;i<=Y;i++){
			if(i%13!=0){
				soma+=i;
			} else{
				continue;
			}
		}
	}
	printf("%d\n", soma);
	
    return 0;
}
