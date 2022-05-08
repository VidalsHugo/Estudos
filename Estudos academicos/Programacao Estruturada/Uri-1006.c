#include <stdio.h>
 
int main() {
 
  double A, B, C, media, media1;
  
  scanf("%lf\n%lf\n%lf", &A, &B, &C);
  
  media1 = A*2 + B*3 + C*5;
  media = media1 / 10;
  
  printf("MEDIA = %.1lf\n", media);
  
  
    return 0;
}
