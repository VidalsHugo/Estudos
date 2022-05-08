#include <stdio.h>
 
int main() {
 
	float M[12][12], soma;
	int i, j, k=0, divi=0;
	char O;
	
	scanf("%s", &O);

	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%f", &M[i][j]);
			if(j>k){
				soma+=M[i][j];
				divi++;
			}
		}k++;
	}
	if(O=='S'){
		printf("%.1f\n", soma);
	}else if(O=='M'){
		printf("%.1f\n", soma/divi);
	}
 
    return 0;
}
