/******************************************************************************
Algoritmo. Notas Prac.Calif
tipo
	array[1..5] de real: arrNota
var
	arrNota: vector
inicio
	//inicializar
	vector[1] <- 13.0
	vector[2] <- 14.0
	vector[3] <- 12.5
	vector[4] <- 05.0
	vector[5] <- 19.0

	//visualizar
	escribir(vector[1])
	escribir(vector[2])
	escribir(vector[3])
	escribir(vector[4])
	escribir(vector[5])

fin
*******************************************************************************/
#include <cstdlib>
#include <iostream>
//tipo
//	array[1..5] de real: arrNota
using namespace std;

int main(int argc, char *argv[]){
//var
	float vector[5];
//inicio
	//inicializar
	vector[1] = 13.0;
	vector[2] = 14.0;
	vector[3] = 12.5;
	vector[4] = 05.0;
	vector[5] = 19.0;

	//visualizar
	printf("%5.2f\n", vector[1]);
	printf("%5.2f\n", vector[2]);
	printf("%5.2f\n", vector[3]);
	printf("%5.2f\n", vector[4]);
	printf("%5.2f\n", vector[5]);
	
	return EXIT_SUCCESS;
}//fin
