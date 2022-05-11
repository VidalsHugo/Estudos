#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, n5, media, media2;
    
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media = (n1*2+n2*3+n3*4+n4*1)/10;
    
    if (media>=7.00)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    
    	else if(media<5.00)
        {
            printf("Media: %.1f\n", media);
            printf("Aluno reprovado.\n");
        }
         
          else if (media>=5.00 && media<=6.9)
            {
                scanf("%f", &n5);
                printf("Media: %.1f\n", media);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %.1f\n", n5);
                
                media2= (media+n5)/2;
                
                if (media2 >=5)
                {
                	printf("Aluno aprovado.\n");
                    printf("Media final: %.1f\n", media2);
				}
				else if (media2 <=4.9)
				{
					 printf("Aluno reprovado.\n");
                     printf("Media final: %.1f\n", media2);
				}
            }
 
    return 0;
}
