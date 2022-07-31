#include <stdio.h>

void VetorM(float *X, float *Y, int n, float a){
    
    int i, k, j;
    
    printf("Valores do vetor X\n");
    for(j=0;j<n;j++){
    	
        scanf("%f", &X[j]);  //Scanf dos valores do vetor 'X'
    }
    printf("Valores do vetor Y\n");
    for(k=0;k<n;k++){
        scanf("%f", &Y[k]);  //Scanf dos valores do vetor 'Y'
    }
    
    for(i=0;i<n;i++){
        Y[i] = (a * X[i]) + Y[i];    /* MultiplicaÃ§Ã£o do vetor 'X' com a constante 'a' e soma do vetor 'X' com 'Y'  */
    }
    
}

int main()
{
    
    int n, M;
    float a;
    
    printf("Tamanho do vetor X e Y\n");
    scanf("%d", &n);  // tamanho do vetor 'X' e 'Y'
    printf("Tamanho da constante a\n");
    scanf("%f", &a);  // valor da constante 'a'
    
    float X[n], Y[n]; // vetores 'X' e 'Y' de tamanho'n'
    
    VetorM(X, Y, n, a);
    
    printf("\nNovo vetor Y\n");
    for(M=0;M<n;M++){
        printf("%.2f ", Y[M]);  // Printf do novo vetor 'Y'
    }
    
    return 0;
}
