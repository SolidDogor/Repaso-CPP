/******************************************************************************
Algoritmo. Matrices
const M <- 2, N <- 3
tipo
	array[1..M;1..N] de real: arrMatrizA
	array[1..M;1..N] de real: arrMatrizB	
	array[1..M;1..N] de real: arrMatrizS
//var
	arrMatrizA: maA
	arrMatrizB: maB
	arrMatrizS: maS
	entero: i,j
inicio
	op. de lectura
	escribir("Ingrese matriz A: ")
	i <- 1
	mientras( hasta M )hacer
		j <- 1
		mientras( hasta N )hacer
			iteracion
			leer(maA[i,j])
			
			j <- j + 1
		fin_mientras
		i <- i + 1
	fin_mientras
	
	escribir("Ingrese matriz B: ")
	i <- 1
	mientras( hasta M )hacer
		j <- 1
		mientras( hasta N )hacer
			iteracion
			leer(maB[i,j])
			
			j <- j + 1
		fin_mientras
		i <- i + 1
	fin_mientras
	
	op. suma
	i <- 1
	mientras( hasta M )hacer
		maS <- 0
		j <- 1
		mientras( hasta N )hacer
			iteracion
			maS[i,j] <- maA[i,j] + maB[i,j]
			j <- j + 1
		fin_mientras
		i = i + 1;
	fin_mientras

	op. de escritura
	i <- 1
	mientras( hasta M )hacer
		j <- 1 
		mientras( hasta N )hacer
			iteracion
			escribir(maS[i,j])
			j <- j + 1
		fin_mientras
		i = i + 1;
	fin_mientras

fin


*******************************************************************************/
//Algoritmo Matrices
#include <cstdlib>
#include <iostream>
//const M <- 2, N <- 3
//tipo
//	array[1..M;1..N] de real: arrMatrizA
//	array[1..M;1..N] de real: arrMatrizB	
//	array[1..M;1..N] de real: arrMatrizS
using namespace std;

int main(int argc, char *argv[]){
//var
    const int M = 3 , N = 2;
	float maA[M][N];
	float maB[M][N];
	float maS[M][N];
	int i,j;
	float suma;

//inicio

	//op. de lectura
	printf("Ingrese matriz A: \n");
	i = 0;
	while( i < M ){//hacer
		j = 0;
		while( j < N ){//hacer
			//iteracion
			scanf("%f", &maA[i][j]);
				
			j = j + 1;
		}//fin_mientras
		i = i + 1;
	}//fin_mientras
	
	printf("Ingrese matriz B: \n");
	i = 0;
	while( i < M ){//hacer
		j = 0;
		while( j < N ){//hacer
			//iteracion
			scanf("%f", &maB[i][j]);
				
			j = j + 1;
		}//fin_mientras
		i = i + 1;
	}//fin_mientras
	
	//op. suma
	i = 0;
	while( i < M ){//hacer
		suma = 0;
		j = 0;
		while( j < N ){//hacer
			//iteracion
			maS [i][j]= maA[i][j] + maB[i][j];
			j = j + 1;
		}//fin_mientras
		i = i + 1;
	}//fin_mientras

	//op. de escritura
	printf("La matriz S es:\n");
	i = 0;
	while( i < M ){//hacer
		j = 0;
		while( j < N ){//hacer
			//iteracion
			printf("%5.2f", maS[i][j]);
			j = j + 1;
		}//fin_mientras
		printf("\n");
		i = i + 1;
	}//fin_mientras
	
	return EXIT_SUCCESS;	
}//fin
