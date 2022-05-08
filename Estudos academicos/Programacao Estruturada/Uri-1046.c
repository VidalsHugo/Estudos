#include <stdio.h>
 
int main() {
    
 int inicio, fim, tempo_total, DRC;
  
  scanf("%d %d", &inicio, &fim);
  
  tempo_total = 24;
  
if (inicio > fim){
    DRC=tempo_total-inicio+fim;
    printf("O JOGO DUROU %d HORA(S)\n", DRC);
}
else if(inicio < fim){
    DRC=fim-inicio;
    printf("O JOGO DUROU %d HORA(S)\n", DRC);
}
else if (inicio == fim){
    DRC=tempo_total;
    printf("O JOGO DUROU %d HORA(S)\n", DRC);
}
return 0;
}
