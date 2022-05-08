#include <stdio.h>
 
int main() {
 
	int X, Y,i=0, x=1;
	
	scanf("%d %d", &X, &Y);
	
	if(X>1 && X<20 && Y>X && Y<1000000){
		
		do{
			i++;
			printf("%d", x);
			x++;
			if(i!=X){
				printf(" ");
				continue;
			} else if(i==X && x!=Y){
				printf("\n");
				i=0;
			} else if(x==Y){
				break;
			}
			
		}while(x<=Y);
		
	}
 
    return 0;
}
