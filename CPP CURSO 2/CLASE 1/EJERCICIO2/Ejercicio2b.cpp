/******************************************************************************
Algoritmo. Promedio Notas aula
const M <- 2, N <- 5
tipo
	array[1..M;1..N] de real: arrAula
	array[1..M] de real: arrPromedio
var
	arrAula: aula
	arrPromedio: media
	entero: i,j
	entero: nota menor
	real: suma
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
			//identificar menor
			si( j < nota menor ) hacer
				nota menor <- j
			fin_si
		fin_mientras
		i <- i + 1
		si( i < nota menor ) hacer
				nota menor <- i
			fin_si
	fin_mientras
	
	//calcular promedio
	i <- 1
	mientras( hasta M )hacer
	    suma <- 0
		j <- 1
		mientras( hasta N ) hacer
			//iteracion
			suma <- suma + aula[i,j]

			j <- j + 1
		fin_mientras
		media[M] <- suma - nota menor / N - 1
		i <- i + 1
	fin_mientras
	
	//desplegar promedios
	i <- 1
	mientras( hasta M )hacer
		//iteracion
		escribir(media[i])
		
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
	float media[M];
	float notmen[N];
	int i,j;
	int suma;
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

	//identificar minimo
	i = 0;
	while( i < M ){//hacer
		notmen[i]=20;
		j = 0;
		while( j < N ){//hacer
			//iteracion
			if(aula[i][j]<notmen[i]){//hacer
				notmen[i]=aula[i][j];
			}//fin_si
			j = j + 1;
		}//fin_mientras
		i = i + 1;
	}//fin_mientras
	
	//calcular promedio
	i = 0;
	while ( i < M ){//hacer
		suma = 0;
		j = 0;
		while ( i < N ){//hacer
			//iteracion
			suma = suma + aula[i][j];

			j = j + 1;
	}//fin_mientras
	media[i] = (suma - notmen[i])/ (N-1);
	i = i + 1;
	}//fin_mientras
	
	//op. de escritura
	i = 0;
	while( i < M ){//hacer
		j = 0;
		while( j < N ){//hacer
			//iteracion
			printf("%d", aula[i][j]);

			j = j + 1;
		}//fin_mientras
		printf("\n");
		i = i + 1;
	}//fin_mientras
	
	//desplegar minimos
	i=0;
	while ( i < M){//hacer
		//iteracion
		printf("%d", notmen[i]);
		i = i + 1;
	}
	//desplegar promedios
	i = 0;
	while ( i < M ){//hacer
		//iteracion
		printf("%f", media[i]);
		i = i + 1;
	}//fin_mientras

	
    return EXIT_SUCCESS;
}//fin
//def. prototipos

