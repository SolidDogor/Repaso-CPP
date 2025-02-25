/******************************************************************************
Algoritmo. Promedio Notas aula
const M <- 2, N <- 5
tipo
	array[1..M;1..N] de real: arrAula
	array[1..M] de real: arrPromedio
	array[1..M] de entero: arrNotaMenor
var
	arrAula: aula
	arrPromedio: media
	arrNotamenor: min
	entero: i,j,m,p
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
		fin_mientras
		i <- i + 1
	fin_mientras
	
	//identificar minimo
	i <- 1
	mientras( hasta M)hacer
		min[m] <- 20
		j <- 1
		mientras( hasta N)hacer
			//iteracion
			si(aula[i,j] < min[m] )entonces
			    min[m] <- aula[i,j]
            fin_si
			j <- j + 1
		fin_mientras
		i <- i + 1
	fin_mientras

	//op. calculo promedio
	i <- 1
	mientras( hasta M)hacer
		suma <- 0
		j <- 1
		mientras( hasta N)hacer
			//iteracion
			suma <- suma + aula[i,j]
			j <- j + 1
		fin_mientras
		media[p] <- (suma - min[m])/ (N-1)
		i <- i + 1
	fin_mientras

	//op. de escritura
	i <- 1
	mientras( hasta M )hacer
		//iteracion
		escribir(aula[i],[j])
		
		i <- i + 1
	fin_mientras
	
	//desplegar promedios
	i <- 1
	mientras( hasta M )hacer
		//iteracion
		escribir(media[p])
		
		i <- i + 1
	fin_mientras
    
    //desplegar minimos
	i <- 1
	mientras( hasta M)hacer
		//iteracion
		escribir(min[m])
		i <- i + 1
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
	int min[M];
	int i,j,m,p;
	float suma;
//inicio
	//op. de lectura
	printf("Ingrese notas alumno: \n");
	i = 0;
	while( i < M ){//hacer
		j = 0;
		while( j < N ){//hacer
			//iteracion
			scanf("%f", aula[i,j]);
			
			j = j + 1;
		}//fin_mientras
		i = i + 1;
	}//fin_mientras
	
	//identificar minimo
	i = 0;
	while( i < M ){//hacer
	    min[m] = 20;
		j = 0;
		while( j < N ){//hacer
			//iteracion
			if(aula[i][j] < min[m] ){//entonces
			    min[m] = aula[i][j];
            }//fin_si
			j = j + 1;
		}//fin_mientras
		i = i + 1;
	}//fin_mientras

	//op. calculo promedio
	i = 0;
	while( i < M){//hacer
	    media[p] = 0;
		suma = 0;
		j = 0;
		while( j < N){//hacer
			//iteracion
			suma = suma + aula[i][j];
			j = j + 1;
		}//fin_mientras
		media[p] = (suma - min[m])/ (N-1);
		i = i + 1;
	}//fin_mientras
	
	//op. de escritura
	i = 0;
	while( i < M ){//hacer
		//iteracion
		printf("%f", aula[i][j]);
		
		i = i + 1;
	}//fin_mientras

	//desplegar promedios
	i = 0;
	while( i < M ){//hacer
		//iteracion
		printf("%f", media[p]);
		
		i = i + 1;
	}//fin_mientras
    
    //desplegar minimos
	i = 0;
	while( i < M ){//hacer
		//iteracion
		printf("%d", min[m]);
		i = i + 1;
	}//fin_mientras

    return EXIT_SUCCESS;	
}//fin
