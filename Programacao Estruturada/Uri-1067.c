#include <stdio.h>
 
int main() {
 
	int i, num, imp;
    
    scanf("%d", &num);
    
    if(num>=1 && num<=1000){
    for(i=1;i<=num;i++){
        if(i%2!=0){
            printf("%d\n", i);
        }
    }
}
    
    return 0;
}
