#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
    int case_teste;
    scanf("%d", &case_teste);
    
    char vetor[8][8];
    int i;
    for(i=0;i<case_teste;i++){
    printf("\n");
    	int j, k;
    	
    	for(j=0;j<8;j++){
    		for(k=0;k<8;k++){
    			vetor[j][k] = '.';
			}
		}
    	
    	for(j=0;j<8;j++){
    		for(k=0;k<8;k++){
    			scanf(" %c", &vetor[j][k]);
			}
		}
    	int m, n, countR=0, countB=0, flag1=0;
    	//verificando horizontal
    	for(m=0;m<8;m++){
    		countR =0;
			countB =0;
    		for(n=0;n<8;n++){
    			if(vetor[m][n] == 'R'){
    				countR +=1;
				}
			}if(countR == 8){
				printf("R");
				break;
			}
		}
			int countR2=0,countB2=0;
			//verificando vertical
			int l, q;
			for(l=0;l<8;l++){
			countR2=0;
			countB2=0;
			for(q=0;q<8;q++){
			if(vetor[q][l] == 'B'){
				countB2+=1;
				}
			}if(countB2 == 8){
				printf("B");
				break;
			}
		}
}
    
    return 0;
}
