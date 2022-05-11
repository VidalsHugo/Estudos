#include <stdio.h>
 
int main() {
 
	int N, i, f1=0, f2=1, f3=0;
   
   scanf("%d", &N);
   if(N>0 && N<46){
   	 for(i=1;i<=N;i++){
 	printf("%d", f1);
 	if(i!=N){
 	printf(" ");
	 }else{
	    printf("\n");
	 	break;
	 }

 	i++;
	 printf("%d", f2);
	 if(i!=N){
	 	printf(" ");
	 }else{
	    printf("\n");
	 	break;
	 }

	 f3=f1+f2;
	 printf("%d", f3);
	  i++;
	  if(i!=N){
	  	printf(" ");
	  }else{
	  	printf("\n");
	  	break;
	  }

	 f1=f2+f3;
	 f2=f3+f1;
	 f3=f1+f2;
 }
   }
 
    return 0;
}
