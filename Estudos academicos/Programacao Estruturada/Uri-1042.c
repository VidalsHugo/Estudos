#include <stdio.h>
 
int main() {
	
   int A, B, C, aux, cont1, cont2, cont3;
   
    scanf("%d %d %d", &A, &B, &C);
   
   cont1 = A;
   cont2 = B;
   cont3 = C;

if(cont1<cont2)
{
	aux = cont1;
	cont1= cont2;
	cont2 = aux;
}
if (cont2<cont3)
{
	aux = cont2;
	cont2 = cont3;
	cont3 = aux;
}
if (cont1<cont2)
{
	aux = cont1;
	cont1 = cont2;
	cont2 = aux;
}

     printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", cont3, cont2, cont1, A, B, C);
     
    return 0;
}
