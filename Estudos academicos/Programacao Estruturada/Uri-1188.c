#include <stdio.h>
 
int main() {
 
	double M[12][12], soma=0;
	int i, j, divi=0, k=7, l=5, k2=11 , l2=6;
	char O;
	
	scanf("%s", &O);

	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf", &M[i][j]);
			if(i>=k && i<=k2 && j>=l && j<=l2){
				soma+=M[i][j];
				divi++;
			}
		}
		if(divi>0){
		l--;
		l2++;
		}
	
	}
	if(O=='S'){
		printf("%.1lf\n", soma);
	}else if(O=='M'){
		printf("%.1lf\n", soma/divi);
	}
 
    return 0;
}
