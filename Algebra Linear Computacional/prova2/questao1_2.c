#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 21

struct variavel{
    int num;
};

struct variavel X[TAM][TAM];

void printar(double A[TAM][TAM], double B[TAM]){

    int i,j;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf(" %5.2lf ", A[i][j]);
        }
        printf("= %5.2lf ", B[i]);
        printf("\n");
    }
    printf("\n");
    printf("------------\n\n");
}

void SystemResol(double A[TAM][TAM], double B[TAM]){

    int i,j;
    double x[TAM],Z[TAM];

    for(i=0;i<TAM;i++){
         x[i] = 0.0;  // inicializando vetor x zerado
    }

    for(i=TAM-1;i>=0;i--){
        double bi = B[i];

          if(i==TAM-1){
                x[X[TAM-1][TAM-1].num] = B[i] / A[i][i];
            }

        for(j=TAM-1;j>=0;j--){
            if(j!=i){
                bi -= A[i][j]*x[X[i][j].num];
            }
        }
        x[X[i][i].num] = bi / A[i][i];

    }

    for(i=0;i<TAM;i++){
        printf("x%d = %4.2lf\n", i+1, x[i]);
    }
}

void GaussTotal(double A[TAM][TAM], double B[TAM]){

    int i=0,j=0, N, M, I, J, linha=0, coluna=0;
    double multi[TAM][TAM];

    for(M=0;M<TAM;M++){
        for(N=0;N<TAM;N++){
            multi[M][N] = 0;        //inicia a matriz zerada
        }
    }

    for(j=0;j<TAM-1;j++){
        double MaiorValor=0.0;

        for(I=j;I<TAM;I++){
            for(J=j;J<TAM;J++){
                double X = abs(A[I][J]);
                if(X > MaiorValor){
                    MaiorValor = A[I][J];       //procura maior valor da matriz
                    linha = I;
                    coluna = J;
                }
            }
        }
        int jj;
            double aux;
            for(jj=j;jj<TAM;jj++){
                aux = A[j][jj];
                A[j][jj] = A[linha][jj];   //Trocando linha de A
                A[linha][jj] = aux;

                aux = X[j][jj].num;
                X[j][jj].num = X[linha][jj].num;
                X[linha][jj].num= aux;
            }

            aux = B[j];
            B[j] = B[linha];   //trocando linhas de B
            B[linha] = aux;

            int II;
            for(II=j;II<TAM;II++){
                aux = A[II][j];
                A[II][j] = A[II][coluna];  //trocando coluna de A
                A[II][coluna] = aux;

                aux = X[II][j].num;
                X[II][j].num = X[II][coluna].num;
                X[II][coluna].num = aux;
            }

                int m,n, N;
                for(m=j+1;m<TAM;m++){
                    multi[m][j] = -A[m][j]/A[j][j];

                    for(n=j;n<TAM;n++){
                        A[m][n] += multi[m][j] * A[j][n];       //zera o valor abaixo do pivo e calcula a linha inteira
                        
                    }
                   B[m] += multi[m][j] * B[j];
                }
    }
    printf("\n\nMATRIZ COM PIVOTEAMENTO TOTAL\n");
    printar(A, B); 
    SystemResol(A, B);
    
}
int main(){

double A[TAM][TAM];
int soma = 1, i,j;

//montando matriz A
for(i=0;i<TAM;i++){
    for(j=0;j<TAM;j++){
        if(i<j){
            A[i][j] = soma;
            soma++;
        }
        if(i==j){
            A[i][j] = 0;
        }
    }
    soma=1;
}
soma=1;
for(j=0;j<TAM;j++){
    for(i=0;i<TAM;i++){
        if(i>j){
            A[i][j] = soma;
            soma++;
        }
    }
    soma=1;
}
//montando Vetor B
double B[TAM];
soma=1;
for(i=0;i<TAM;i++,soma++){
    B[i] = soma;
}

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            X[i][j].num = j;
        }
    }

    printf("\n\nMATRIZ AUMENTADA\n");
    printar(A, B);
    GaussTotal(A, B);

    return 0;
}