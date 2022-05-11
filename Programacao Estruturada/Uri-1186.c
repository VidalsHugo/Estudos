#include <stdio.h>
 
int main() {
 
	float M[12][12], soma=0;
	int i, j, divi=0, k=0, l=11;
	char O;
	
	scanf("%s", &O);

	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%f", &M[i][j]);
			if(i>k && j>l){
				soma+=M[i][j];
				divi++;
			}
		}
		l--;
	}
	if(O=='S'){
		printf("%.1f\n", soma);
	}else if(O=='M'){
		printf("%.1f\n", soma/divi);
	}
 
    return 0;
}
