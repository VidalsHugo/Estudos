#include <stdio.h>
 
int main() {
 
	double M[12][12], soma=0;
	int i, j, divi=0, k=0, l=1, k2=4 , l2=10;
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
		l++;
		l2--;
	}
	if(O=='S'){
		printf("%.1lf\n", soma);
	}else if(O=='M'){
		printf("%.1lf\n", soma/divi);
	}
	
 
    return 0;
}
