#include <stdio.h>
 
int main() {
 
int i, num, val, resp;

scanf("%d", &num);

val=0;
if(num>5 && num<2000){
    for(i=1;i<=num;i++){
        val++;
        if(val%2==0){
            printf("%d^2 = ", val);
            resp=val*val;
            printf("%d\n", resp);
        }
    }
}

    return 0;
}
