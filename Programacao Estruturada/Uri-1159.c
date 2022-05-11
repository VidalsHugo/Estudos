#include <stdio.h>
 
int main() {
 
	int N, i, j=1, par=0;

for(i=1;i>0;i++){
	scanf("%d", &N);
	if(N!=0){
		    do{
	    	if(N%2==0){
	    		par+=N;
	    		N++;
	    		j++;
			}else{
				N++;
				continue;
			}
			}while(j<=5);
    printf("%d\n", par);
    par=0;
    j=1;
}else if(N==0){
	break;
}
    
}
 
    return 0;
}
