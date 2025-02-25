/******************************************************************************
Algoritmo. Promedio Notas aula
const M <- 2, N <- 5
tipo
	array[1..M;1..N] de real: arrAula
	array[1..M] de real: arrPromedio
	array[1..M] de real: arrNota_menor
//var
	arrAula: aula
	arrPromedio: media
	arrNota_menor: min
	entero: i,j
	real: suma
inicio
	op. de lectura
	escribir("Ingrese notas del alumno: ")
	i <- 1
	mientras( hasta M )hacer
		j <- 1
		mientras( hasta N )hacer
			iteracion
			leer(aula[i,j])
			
			j <- j + 1
		fin_mientras
		i <- i + 1
	fin_mientras
	
	identificar minimo
	i <- 1
	mientras( hasta M )hacer
		min[i] <- 20
		j <- 1
		mientras( hasta N )hacer
			iteracion
			si(aula[i,j] < min[i])entonces
				min[i] <- aula[i,j]
			fin_si
			j <- j + 1
		fin_mientras
		i <- i + 1
	fin_mientras
	
	op. calculo promedio
	i <- 1
	mientras( hasta M )hacer
		suma <- 0
		j <- 1
		mientras( hasta N )hacer
			iteracion
			suma <- suma + aula[i,j]
			j <- j + 1
		fin_mientras
		media[i] <- (suma-min[i]) / (N-1)
		i = i + 1;
	fin_mientras

	op. de escritura
	i <- 1
	mientras( hasta M )hacer
		j <- 1 
		mientras( hasta N )hacer
			iteracion
			escribir(aula[i,j])
			j <- j + 1
		fin_mientras
		escribir(min[i])
		escribir(media[i])
		i = i + 1;
	fin_mientras

fin


*******************************************************************************/
//Algoritmo. Promedio Notas aula
#include <cstdlib>
#include <iostream>
//const M <- 2, N <- 5
//tipo
//	array[1..M;1..N] de real: arrAula
//	array[1..M] de real: arrPromedio
//	array[1..M] de real: arrNotaMenor
using namespace std;

int main(int argc, char *argv[]){
//var
    const int M = 2 , N = 5;
	float aula[M][N];
	float media[M];
	float min[M];
	int i,j;
	float suma;
//inicio
	//op. de lectura
	printf("Ingrese notas del alumno: \n");
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
	
	//identificar minimo
	i = 0;
	while( i < M ){//hacer
		min[i] = 20;
		j = 0;
		while( j < N ){//hacer
			//iteracion
			if(aula[i][j] < min[i]){//entonces
				min[i] = aula[i][j];
			}//fin_si
			j = j + 1;
		}//fin_mientras
		i = i + 1;
	}//fin_mientras
		
	//op. calculo promedio
	i = 0;
	while( i < M ){//hacer
		suma = 0;
		j = 0;
		while( j < N ){//hacer
			//iteracion
			suma = suma + aula[i][j];
			j = j + 1;
		}//fin_mientras
		media[i] = (suma-min[i]) / (N-1);
		i = i + 1;
	}//fin_mientras

	//op. de escritura
	i = 0;
	while( i < M ){//hacer
		j = 0;
		while( j < N ){//hacer
			//iteracion
			printf("%5.2f", aula[i][j]);
			j = j + 1;
		}//fin_mientras
		printf(" La nota minima de este alumno es: %5.2f", min[i]);
		printf(" Su promedio es: %5.2f", media[i]);
		printf("\n");
		i = i + 1;
	}//fin_mientras

    return EXIT_SUCCESS;	
}//fin

