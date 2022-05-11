#include <stdio.h>
 
int main() {
 
	float num, media;
	int i, val;
 
 val=0;
 for(i=1;i<=6;i++){
     scanf("%f", &num);
     if(num>0){
         val+=1;
         media+=num;
     }
 }
 
 printf("%d valores positivos\n", val);
 media = media / val;
 printf("%.1f\n", media);
    return 0;
}
