#include <stdio.h>
 
int main() {
 
	double M[12][12], soma=0;
	int i, j, divi=0, k=1, l=0, k2=10 , l2=0;
	char O;
	
	scanf("%s", &O);

	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			scanf("%lf", &M[i][j]);
			if(i==k && i<=k2 && j>=l && j<=l2){
				soma+=M[i][j];
				divi++;
			}
		}
		if(divi>0 && i<=5){
		l2++;
		k++;
		if(i==5){
			l2--;
		}
		}else if(divi>0 && i>=6){
			l2--;
			k++;
		}
	}
	if(O=='S'){
		printf("%.1lf\n", soma);
	}else if(O=='M'){
		printf("%.1lf\n", soma/divi);
	}
 
    return 0;
}
