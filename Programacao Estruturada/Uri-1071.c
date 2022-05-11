#include <stdio.h>
 
int main() {
 
 int X, Y, i, imp, dist;
 
 scanf("%d", &X);
 scanf("%d", &Y);
 imp=0;
 
    if(X>Y){
        dist=X-Y; 
     for(i=1;i<dist;i++){
        Y++;
        if(Y%2!=0){
            imp+=Y;
        }
    }
    printf("%d\n", imp);
}
    else if(X<Y){
        dist=Y-X;
     for(i=1;i<dist;i++){
         X++;
         if(X%2!=0){
            imp+=X;
         }
    }
    printf("%d\n", imp);
}
else if(X==Y){
		printf("0\n");
	}
	
    return 0;
}
