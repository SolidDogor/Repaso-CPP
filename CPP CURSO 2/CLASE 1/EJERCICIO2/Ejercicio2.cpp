/******************************************************************************
Algoritmo. Notas aula
const M <- 2, N <- 5
tipo
	array[1..M;1..N] de real: arrAula
var
	arrAula: aula
	entero: i,j
inicio
	//op. de lectura
	escribir("Ingrese notas alumno: ")
	i <- 1
	mientras( hasta M )hacer
		j <- 1
		mientras( hasta N ) hacer
			//iteracion
			leer(aula[i,j])

			j <- j + 1
		fin_mientras
		i <- i + 1
	fin_mientras
	
	//op. de escritura
	i <- 1
	mientras( hasta M )hacer
		j <- 1
		mientras( hasta N ) hacer
			//iteracion
			escribir(aula[i,j])

			j <- j + 1
		fin_mientras
		i <- i + 1
	fin_mientras

fin
def. prototipos
*******************************************************************************/
//Algoritmo. Notas aula
#include <cstdlib>
#include <iostream>
//const M <- 2, N <- 5
//tipo
//	array[1..M;1..N] de real: arrAula
using namespace std;

int main(int argc, char *argv[]){
//var
    const int M = 2, N = 5;
	float aula[M][N];
	int i,j;
//inicio
	//op. de lectura
	printf("Ingrese notas alumno: \n");
	i = 0;
	while( i < M ){//hacer
		j = 0;
		while( j < N ){//hacer
			//iteracion
			scanf("%f", &aula[i][j]);

			j = j + 1;
		}//fin_mientras
		i = i + 1;
	}//fin_mientras
	
	//op. de escritura
	i = 0;
	while( i < M ){//hacer
		j = 0;
		while( j < N ){//hacer
			//iteracion
			printf("%f", aula[i][j]);

			j = j + 1;
		}//fin_mientras
		printf("\n");
		i = i + 1;
	}//fin_mientras

    return EXIT_SUCCESS;
}//fin
//def. prototipos
