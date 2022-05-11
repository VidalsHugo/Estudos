#include <stdio.h>
 
int main() {
    
  double SALARIO, S1, S2, S3, S4, S5, percent;
  
  scanf("%lf", &SALARIO);
  
  if (SALARIO >=0 && SALARIO <=400){
      percent = (15*SALARIO)/100;
      SALARIO += percent;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", SALARIO, percent);
  }
  else if (SALARIO >=400.01 && SALARIO <=800.00){
      percent = (12*SALARIO)/100;
      SALARIO += percent;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", SALARIO, percent);
  }
  else if (SALARIO >=800.01 && SALARIO <=1200.00){
      percent = (10*SALARIO)/100;
      SALARIO += percent;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", SALARIO, percent);
  }
  else if (SALARIO >=1200.01 && SALARIO <=2000.00){
      percent = (7*SALARIO)/100;
      SALARIO += percent;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", SALARIO, percent);
  }
  else if (SALARIO >2000.00){
      percent = (4*SALARIO)/100;
      SALARIO += percent;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", SALARIO, percent);
  }
  
    return 0;
}
