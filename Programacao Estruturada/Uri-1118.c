#include <stdio.h>
 
int main() {
 
	int X;
	float i, N, media;
    
    do{
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
    for(i=1;i>=1;i++){
    	printf("novo calculo (1-sim 2-nao)\n");
    	scanf("%d", &X);
    	if(X==1){
    		break;
		}else if(X==2){
			break;
		}
	}

	}while(X==1);
 
    return 0;
}
