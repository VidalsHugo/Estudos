#include <stdio.h>
 
int main() {
    
 double R, volume, volume1;

 scanf("%lf", &R);
 
 volume1 = 4*3.14159*R*R*R;
 volume = volume1 / 3;
 
 printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}
