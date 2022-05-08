#include <stdio.h>
 
int main() {
 
	    float i, N, media;
    
    media=0;
    i=1;
    while(i<=2){
        scanf("%f", &N);
        
        if(N>=0 && N<=10){
            media+=N;
            i++;
        } else{
            printf("nota invalida\n");
        }
        
    }
    media=media/2;
    printf("media = %.2f\n", media);
 
    return 0;
}
