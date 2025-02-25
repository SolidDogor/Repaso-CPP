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

    //desplegar minimos
	i = 0;
	while( i < M ){//hacer
		//iteracion
		printf("%f", min[i]);
		i = i + 1;
	}//fin_mientras

    return EXIT_SUCCESS;	
}//fin
