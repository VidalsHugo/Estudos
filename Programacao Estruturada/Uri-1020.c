#include <stdio.h>
 
int main() {
 
  int Idade, anos, meses, dias;
  
  scanf("%d", &Idade);
  
  anos = Idade / 365;
  meses = (Idade % 365)/30;
  dias = ((Idade % 365)%30);
  
  
  printf("%d ano(s)\n", anos);
  printf("%d mes(es)\n", meses);
  printf("%d dia(s)\n", dias);
  
    return 0;
}
