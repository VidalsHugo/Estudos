#include <stdio.h>
 
int main() {
 
	int N, i, fat=0, N2;
	
	scanf("%d", &N);
	N2=N;
	if(N>0 && N<13){
		for(i=1;i>0;i++){
	
		N2--;
		if(N2<1){
			break;
		}else{
			fat=N*N2;
			N=fat;
		}	
	
}
	printf("%d\n", fat);
	}
 
    return 0;
}
