#include <stdio.h>
 
int main() {
 
 int j, i, N, X, Y, soma;
 
 scanf("%d", &N);
 
for(i=1;i<=N;i++){
     scanf("%d %d", &X, &Y);
     
     if(X<Y){
     	     for(j=X+1;j<Y;j++){
        	 if(j%2!=0){
         		soma+=j;
         		
         }
     }
 }
 else if(X>Y){
 	for(j=Y+1;j<X;j++){
 		if(j%2!=0){
 			soma+=j;
		 }
	 }
 }

     printf("%d\n", soma);
     soma=0;
}

    return 0;
}
