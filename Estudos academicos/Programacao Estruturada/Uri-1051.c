#include <stdio.h>
 
int main() {
	
 float renda, renda_pct, renda_pct2, renda_pct3, renda_total;

 scanf("%f", &renda);

if (renda <=2000.00){
     printf("Isento\n");
}
else if (renda>=2000.01 && renda <=3000.00){
  renda-=2000.00;
  renda_total=(8*renda)/100;
  printf("R$ %.2f\n", renda_total);
}
	else if(renda>=3000.01 && renda<=4500.00){
	renda_pct=(8*1000)/100;
	renda = renda - 2000 - 1000;
	renda=(18*renda)/100;
	renda_total=renda + renda_pct;
	printf("R$ %.2f\n", renda_total);
}
	else if(renda>4500.00){
	renda_pct=(8*1000)/100;
	renda_pct2=(18*1500)/100;
	renda = renda - 2000 - 1000 - 1500;
	renda_pct3=(28*renda)/100;
	renda_total = renda_pct + renda_pct2 + renda_pct3;
	printf("R$ %.2f\n", renda_total);
}

    return 0;
}
