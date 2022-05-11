#include <stdio.h>
 
int main() {

int ent, i, val;

val=0;
for(i=1;i<=5;i++){
    scanf("%d", &ent);
    
    if(ent%2==0){
        val+=1;
    }
}
 printf("%d valores pares\n", val);
 
    return 0;
}
