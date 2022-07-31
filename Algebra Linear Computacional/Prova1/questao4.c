#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 30

double MetodJacobi(double A[TAM][TAM], double B[TAM], double FuncaoX[TAM], double result, int *cont){
    
	double prox[TAM];  // guarda a iteracao seguinte
	int i, j;
	double FuncaoY[TAM];
	 double somaX[TAM], Aux[TAM], mod=0;
	 
		for(i=0;i<TAM;i++){
		    FuncaoY[i] = 0;  // inicializando o FuncaoY com valores zerados
		    somaX[i] = 0;  // inicializando o SomaX com valores zerados
		    prox[i] = 0;  // inicializando o prox com valores zerados
		}
	int k=0;
	int cont2=0;
	while(result > pow(10.0,-4.0)){   // criterio de parada
	cont2++;
		for(i=0;i<TAM;i++){  // percorrendo cada equacao
		    double bi = B[i];  // variavel independente
			for(j=0;j<TAM;j++){  // percorrendo cada termo da linha
			    if(j != i){  //  ignora a equacao da variavel
			        bi -= A[i][j] * FuncaoX[j];  // isolando as variaveis diferentes da equacao do outro lado e somando-as/multiplicando pela funcaoX
			    }
			}
			bi /= A[i][i];  // dividindo pelo coeficiente da variavel

			//printf("x_i%d^(%d) = %.5lf\n", i+1, k+1, bi);
			
			prox[i] = bi;
		}
	
		for(i=0;i<TAM;i++){
		    FuncaoY[i] = FuncaoX[i];  // copiando a FuncaoX para a FuncaoY
		}
		for(i=0;i<TAM;i++){
		    FuncaoX[i] = prox[i];  // atualizar a FuncaoX
		}
		
		double aux=0.0;  // variavel para guardar o maior elemento da subtracao das funcoes
		for(i=0;i<TAM;i++){
		    somaX[i] = fabs(FuncaoX[i] - FuncaoY[i]);
		    if(somaX[i]>aux){
		        aux = somaX[i];
		    }
		}
		result = aux;
		
		k++;
	}
	*cont = cont2;  // contador de iteracoes
	return result;
}

double MetodSeidel(double A[TAM][TAM], double B[TAM], double FuncaoX[TAM], double resultS, int *cont){
    
    double prox[TAM];
	int i, j;
	double FuncaoY[TAM];
	 double somaX[TAM], Aux[TAM], mod=0;
	 
		for(i=0;i<TAM;i++){
		    FuncaoY[i] = 0;  // inicializando o FuncaoY com valores zerados
		    somaX[i] = 0;  // inicializando o SomaX com valores zerados
		    prox[i] = 0;  // inicializando o prox com valores zerados
		}
	int k=0;
	int cont2=0;
	while(resultS > pow(10.0,-4.0)){   // criterio de parada
	cont2++;
		for(i=0;i<TAM;i++){  // percorrendo cada equacao
		    double bi = B[i];  // variavel independente
			for(j=0;j<TAM;j++){  // percorrendo cada termo da linha
			    if(j != i){  //  ignora a equacao da variavel
			        bi -= A[i][j] * prox[j];  // isolando as variaveis diferentes da equacao do outro lado e somando-as/multiplicando pela funcaoX
			    }
			}
			bi /= A[i][i];  // dividindo pelo coeficiente da variavel

	//	printf("x_i%d^(%d) = %.5lf\n", i+1, k+1, bi);

			prox[i] = bi;
		}
		
		
	    
		for(i=0;i<TAM;i++){
		    FuncaoY[i] = FuncaoX[i];  // copiando a FuncaoX para a FuncaoY
		}
		for(i=0;i<TAM;i++){
		    FuncaoX[i] = prox[i];  // atualizar a FuncaoX
		}
		
		double aux=0.0;  // variavel para guardar o maior elemento da subtracao das funcoes
		for(i=0;i<TAM;i++){
		    somaX[i] = fabs(FuncaoX[i] - FuncaoY[i]);
		    if(somaX[i]>aux){
		        aux = somaX[i];
		    }
		}
		resultS = aux;
		
		k++;
	}
	*cont = cont2;  // contador de iteracoes
	return resultS;
}

void Mod(double A[TAM][TAM], double B[TAM], double FuncaoX[TAM]){
    
    int i, j;
    
    for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){  // inicializando a matriz A com todos os valores zerados
			A[i][j] = 0;
		}
	}
	for(i=0;i<TAM;i++){
		B[i] = 0;  // inicializando o vetor B com os valores zerados
	}
	for(i=0;i<TAM;i++){
		FuncaoX[i] = 0;  // inicializando a funcaoX com os valores zeraodos
	}
	
	A[0][0] = -2.02;
	A[0][1] = 1;  // primeira linha da matriz A
	
    int a, b, c;
    for(a=1,b=0,c=1;a<TAM,b<TAM,c<TAM;a++,b++,c++){
        A[a][b] = 1;
        A[a][c] = -2.02;     // definindo os valores da matriz A
        A[a][c+1] = 1;
    }

	B[0] = 1;
	B[TAM-1] = 1;  // definindo o vetor B segundo a questao 4
	
    
}

int main() {
	
	double A[TAM][TAM], B[TAM],FuncaoX[TAM]
	,result=9999, resultS=9999;
	int cont=0, i,j;
	
	printf(" ----------------------------------------------------------------------------------");
	printf("\n      VALOR DO EPSLON: 0.0001 ou 10^-4\n");

	printf(" ----------------------------------------------------------------------------------\n");
	
    Mod(A, B, FuncaoX);
	result = MetodJacobi(A, B, FuncaoX, result, &cont);
	printf("ULTIMA ITERACAO:\n\n");
	for(i=0,j=1;i<TAM;i++,j++){
		printf("x%d = %.6lf\n", j, FuncaoX[i]);
	}
	printf(" ----------------------------------------------------------------------------------\n");
	printf("Valor aproximado de Epslon no metodo GAUSS-JACOBI: %.10lf em %d iteracoes\n", result, cont);
	printf("\n");
	printf(" ----------------------------------------------------------------------------------\n");
	Mod(A, B, FuncaoX);
	resultS = MetodSeidel(A, B, FuncaoX, resultS, &cont);
	printf("ULTIMA ITERACAO:\n\n");
		for(i=0,j=1;i<TAM;i++,j++){
		printf("x%d = %.6lf\n", j, FuncaoX[i]);
}
	printf(" ----------------------------------------------------------------------------------\n");
	printf("Valor aproximado de Epslon no metodo GAUSS-SEIDEL: %.10lf em %d iteracoes\n", resultS, cont);
	
    printf("\n ----------------------------------------------------------------------------------\n");
	return 0;
}
