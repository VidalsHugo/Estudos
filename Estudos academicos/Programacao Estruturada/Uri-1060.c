#include <stdio.h>
 
int main() {
 
float num;
int i, qnt;

qnt=0;

for(i=1;i<=6;i++){
	scanf("%f", &num);
	
	if(num>0){
		qnt+=1;
	}
}
printf("%d valores positivos\n", qnt);

    return 0;
}
