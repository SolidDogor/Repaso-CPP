/******************************************************************************
Algoritmo. Notas Pract.Calif v.3
tipo
array[1..5] de real: arrNota
var
	arrNota: vector
	entero: i
inicio
	//op. lectura
	escribir("Ingrese [5] notas: ")
    llamar_a LeerArray
    
	//op. escritura
	i <- 1
	mientras( hasta 5) hacer
		//iteración
		escribir(vector[i])

		i <- i + 1
	fin_mientras

fin
def. de prototipos
procedimiento LeerArray(E/S arrNota: vec)
var
    entero:i
inicio
    i <-1
    mientras( hasta 5)hacer
        //iteracion
        Leer(vector[i])
    
        i <- i + 1
    fin_mientras
fin_procedimiento

*******************************************************************************/
//Algoritmo. Notas Pract.Calif v.3
#include <cstdlib>
#include <iostream>
//tipo
//	array[1..5] de real: arrNota
void LeerArray( float vec[5]);
using namespace std;

int main(int argc, char *argv[]){
//var
	float vector[5];
	int i;
//inicio
    //op. Lectura
    printf("Ingrese [5] notas: \n");
	//llamar_a
	LeerArray(vector);
	
	//op. escritura
	i = 0;
	while( i < 5){//hacer
		//iteración
		printf("%f\n", vector[i]);

		i = i + 1;
	}//fin_mientras
	
	return EXIT_SUCCESS;
}//fin
//def. de prototipos
void LeerArray( float vec[5]){
//var
    int i;
//inicio
    i = 0;
    while( i < 5){//hacer
        //iteracion
        scanf("%f", &vec[i]);
    
        i = i + 1;
    }//fin_mientras
}
//fin_procedimiento

