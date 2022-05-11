#include <stdio.h>
 
int main() {
 
	int i, N[15], par[5], impar[5], j=0, k=0, flag1=0, flag2=0;
	
	
	for(i=0;i<15;i++){
		
		scanf("%d", &N[i]);
		
		if(N[i]%2==0){
			par[j]=N[i];
			j++;
			flag1++;
			if(j==5){
				for(j=0;j<5;j++){
					printf("par[%d] = %d\n", j, par[j]);
				}
				j=0;
				flag1=0;
			}
		}
		else if(N[i]%2!=0){
			impar[k]=N[i];
			k++;
			flag2++;
			if(k==5){
				for(k=0;k<5;k++){
					printf("impar[%d] = %d\n", k, impar[k]);
				}
				k=0;
				flag2=0;
			}
		}
	}
	if(flag2>0){
		for(k=0;k<flag2;k++){
			printf("impar[%d] = %d\n", k, impar[k]);
	}
}
	if(flag1>0){
		for(j=0;j<flag1;j++){
			printf("par[%d] = %d\n", j, par[j]);
	}
}
 
    return 0;
}
