/******************************************************************************
Algoritmo. Notas Pract.Calif v.2
tipo
array[1..5] de real: arrNota
var
	arrNota: vector
	entero: i
inicio
	//op. lectura
	escribir("Ingrese [5] notas: ")
    i <-1
    mientras( hasta 5)hacer
        //iteracion
        Leer(vector[i])
    
        i <- i + 1
    fin_mientras
    
	//op. escritura
	i <- 1
	mientras( hasta 5) hacer
		//iteración
		escribir(vector[i])

		i <- i + 1
	fin_mientras

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
	while( i < 5){//hacer
		//iteración
		printf("%f\n", vector[i]);

		i = i + 1;
	}//fin_mientras
	
	return EXIT_SUCCESS;
}//fin
