//Algoritmo. Notas Pract.Calif

//tipo
//	array[1..5] de real: arrNota
//var
//	arrNota: vector
//inicio
	//inicializar
//	vector[1] <- 13.0
//	vector[2] <- 14.0
//	vector[3] <- 12.5
//	vector[4] <- 05.0
//	vector[5] <- 19.0

	//visualizar
//	escribir(vector[1])
//	escribir(vector[2])
//	escribir(vector[3])
//	escribir(vector[4])
//	escribir(vector[5])

//fin

#include <cstdlib>
#include <iostream>
//tipo
//	array[1..5] de real: arrNota

using namespace std;

int main(int argc, char *argv[]){
//var
	float vector[5];
	int i;
//inicio
    //op. Lectura
    printf("Ingrese [5] notas: \n");
	i = 0;
	while( i < 5){//hacer
		//iteración
		scanf("%f", &vector[i]);

		i = i + 1;
	}//fin_mientras
	
	//op. escritura
	i = 0;
	printf("Las notas son:\n");
	while( i < 5){//hacer
		//iteración
		printf("%5.1f\n", vector[i]);

		i = i + 1;
	}//fin_mientras
	
	return EXIT_SUCCESS;
}//fin
