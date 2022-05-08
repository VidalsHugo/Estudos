#include <stdio.h>
 
int main() {
 
   double A, B, media, media1;
    
    scanf("%lf\n%lf", &A, &B);
    
    media1 = A*3.5 + B*7.5;
    media = media1 / 11;
    
 
    
    printf("MEDIA = %.5lf\n", media);
    
 
    return 0;
}
