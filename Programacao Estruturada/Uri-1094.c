#include <stdio.h>
 
int main() {
    
	int N, i, x, total;
   double pC, pR, pS, TR, TS, TC;
   char A;
   
   scanf("%d", &N);
   
   total=0;
   TR=0;
   TS=0;
   TC=0;
   for(i=1;i<=N;i++){
       scanf("%d %c", &x, &A);
           total+=x;
           
           if(A=='R'){
               TR+=x;
            }
            else if(A=='S'){
                TS+=x;
            }
            else if(A=='C'){
                TC+=x;
            }
   }
   pC=(TC*100)/total;
   pR=(TR*100)/total;
   pS=(TS*100)/total;
   
printf("Total: %d cobaias\n", total);
printf("Total de coelhos: %.0lf\n", TC);
printf("Total de ratos: %.0lf\n", TR);
printf("Total de sapos: %.0lf\n", TS);
printf("Percentual de coelhos: %.2lf %%\n", pC);
printf("Percentual de ratos: %.2lf %%\n", pR);
printf("Percentual de sapos: %.2lf %%\n", pS);
    return 0;
}
