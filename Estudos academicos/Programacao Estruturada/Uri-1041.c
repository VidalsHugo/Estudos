#include <stdio.h>
 
int main() {
    
 float X, Y;
 
 scanf("%f %f", &X, &Y);
 
 if (X == 0.00 && Y ==0.00)
 {
     printf("Origem\n");
 }
	 else if (X == 0.00 && Y !=0.00)
	 {
	     printf("Eixo Y\n");
	 }
		 else if (Y == 0.00 && X !=0.00)
		{
		    printf("Eixo X\n");
		}
			 else if (X>0.00 && Y>0.00)
			{
			    printf("Q1\n");
			}
				 else if (X>0.00 && Y<0.00)
				 {
				     printf("Q4\n");
				 }
					 else if (X<0.00 && Y>0.00)
					 {
					     printf("Q2\n");
					 }
						 else if (X<0.00 && Y<0.00)
						 {
						     printf("Q3\n");
						 }
	
    return 0;
}
