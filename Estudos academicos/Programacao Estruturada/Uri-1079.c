#include <stdio.h>
 
int main() {
 
  int N, i;
  float T1, T2, T3, media;
  
  scanf("%d", &N);
  
  for(i=1;i<=N;i++){
      T1=0;
      T2=0;
      T3=0;
      scanf("%f %f %f", &T1, &T2, &T3);
      media=(T1*2+T2*3+T3*5)/10;
      printf("%.1f\n", media);
  }
 
    return 0;
}
