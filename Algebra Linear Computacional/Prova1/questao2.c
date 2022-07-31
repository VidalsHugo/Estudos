#include <stdio.h>
#include <stdlib.h>

void Vetorfunc(int n, int m, float Ax[n], float X[n], float Y[m], float A[m][n]){
    
    int i, j, k;
    float aux=0;
    
    printf("Valores do vetor X\n");
    for(i=0;i<n;i++){
        scanf("%f", &X[i]);  // valores do vetor 'X'
    }
    printf("Valores da matriz A\n");
    for(j=0;j<m;j++){
        for(k=0;k<n;k++){
            scanf("%f", &A[j][k]);  // valores da matriz 'A'
        }
    }
    printf("Valores do vetor Y\n");
    for(i=0;i<m;i++){
        scanf("%f", &Y[i]);  // valores do vetor 'Y'
    }
    
    for(i=0;i<m;i++){
        Ax[i] = 0;  // limpando vetor Ax de "lixos"
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            aux= A[i][j] * X[j] + aux;  // valores do somatório de 'Ax'
        }
        Ax[i] = aux;
        aux = 0;
    }
    for(i=0;i<m;i++){
        Y[i] = Ax[i] + Y[i];  // soma do vetor 'Ax' e 'Y' e alocando no vetor 'Y'
    }
}

int main()
{
    int n, m;
    
    printf("Tamanho do vetor n\n");
    scanf("%d", &n); // tamanho do vetor 'n'
    printf("Tamanho do vetor m\n");
    scanf("%d", &m); // tamanho do vetor 'm'
    
    float Ax[m], X[n], A[m][n], Y[m];
    
    Vetorfunc(n, m, Ax, X, Y, A);
    
    printf("\nNovo vetor Y:\n");
    int i;
    for(i=0;i<m;i++){
        printf("%.2f ", Y[i]);  // Novo vetor Y
    }
    
    return 0;
}
