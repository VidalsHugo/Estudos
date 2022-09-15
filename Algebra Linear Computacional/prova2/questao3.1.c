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
        printf(" =%5.2lf", B[i]);
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

void Lower(double A[TAM][TAM], double B[TAM], double Y[TAM]){

    int i,j;

    double A_copia[TAM][TAM];
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            A_copia[i][j] = A[i][j];        //criando uma copia da matriz A
        }
    }

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            A_copia[i][i] = 1;
            if(j>i){
                A_copia[i][j] = 0;
            }
        }
    }
    printf("Matriz Lower:\n");
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("%5.2lf ", A_copia[i][j]);
        }
        printf(" = %5.2lf", B[i]);
        printf("\n");
    }
    printf("\n");
//resolvendo o sistema Ly=b
    double x[TAM],Z[TAM];

    for(i=0;i<TAM;i++){
         x[i] = 0.0;  // inicializando vetor x zerado
    }

    for(i=0;i<TAM;i++){
        double bi = B[i];

          if(i==0){
                x[X[0][0].num] = B[i] / A_copia[i][i];
            }

        for(j=0;j<TAM;j++){
            if(j!=i){
                bi -= A_copia[i][j]*x[X[i][j].num];
            }
        }
        x[X[i][i].num] = bi / A_copia[i][i];
        Y[X[i][i].num] = x[X[i][i].num];
    }

    for(i=0;i<TAM;i++){
        printf("y%d = %4.2lf\n", i+1, x[i]);
    }
    printf("\n");
}

void Upper(double A[TAM][TAM], double Y[TAM]){

    int i,j;

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if(j<i){
                A[i][j] = 0;
            }
        }
    }
    printf("Matriz Upper:\n");
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            printf("%5.2lf ", A[i][j]);
        }
        printf(" = %5.2lf", Y[i]);
        printf("\n");
    }
    printf("\n");
    //resolvendo o sistema Ux=y
    double x[TAM];

    for(i=0;i<TAM;i++){
         x[i] = 0.0;  // inicializando vetor x zerado
    }

    for(i=TAM-1;i>=0;i--){
        double bi = Y[i];

          if(i==TAM-1){
                x[X[TAM-1][TAM-1].num] = Y[i] / A[i][i];
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

void FacLU(double A[TAM][TAM], double B[TAM]){

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
                    A[m][j] = -multi[m][j];
                    for(n=j+1;n<TAM;n++){
                        A[m][n] += multi[m][j] * A[j][n];       //zera o valor abaixo do pivo e calcula a linha inteira
                        
                    }
                }
    }
    printf("\n\nMATRIZ Ax=b em LU:\n");
    printar(A, B);
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

double Y[TAM];

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            X[i][j].num = j;        //atribuindo numeracao das variaveis
            
        }
        Y[i] = 0;   //iniciando vetor Y zerados
    }

    printf("\n\nMATRIZ A:\n");
    printar(A, B);
    FacLU(A, B);
    Lower(A, B, Y);
    Upper(A, Y);

    return 0;
}