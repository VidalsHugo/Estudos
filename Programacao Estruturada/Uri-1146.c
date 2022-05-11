#include <stdio.h>
 
int main() {
 
	    int X, i=1;
	    
        do{
        	scanf("%d", &X);
        	if(X>0){
        		do{
        			printf("%d", i);
           			 if(i<X){
             	 	 	printf(" ");
           			}else{
           				printf("\n");
              		 	 break;		
					  	}
					  	i++;
       			}while(i<=X);
       			i=1;
			}
         
        }while(X!=0);
 
    return 0;
}
