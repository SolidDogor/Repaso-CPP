/******************************************************************************
Algoritmo. credito cliente v.3 Listas
const M <- 25
tipo
	regristo: regCliente
		entero: id
		real: credito
		logico: cancelado
	fin_registro
tipo
	array[1..M] de regCliente: lstCliente
var
	regCliente: cliente, customer
	lstCliente: lista
	entero: i
inicio
	//leer registro
	escribir("Ingrese datos cliente: ")
	i <- 1
	mientras( hasta M)hacer
		//iteracion
		llamar_a leeRegistro(lista[i])

		i <- i + 1
	fin mientras

	customer <- cliente

	//escribir - visualizar
	i <- 1
	mientras( hasta M)hacer
		//iteracion
		llamar_a escribirRegistro(lista[i])

		i <- i + 1
	fin mientras

fin
def. prototipos
procedimiento leeRegistro(E/S regCliente: cli)
var
	
inicio
	leer(cli.id)
	leer(cli.credito)
	leer(cli.cancelado)
fin_procedimiento

procedimiento escribirRegistro(E regCliente: cli)
var
	
inicio
	escribir("Codigo   : ", cli.id)
	escribir("Credito  : ", cli.credito)
	escribir("Cancelado: ", cli.cancelado)
fin_procedimiento

*******************************************************************************/
//Algoritmo. credito cliente
#include <cstdlib>
#include <iostream>
//tipo
	struct regCliente{
		int id;
		float credito;
		int cancelado;									//0-false 1-true
	};//fin_registro
//tipo
//	array[1..M] de regCliente: lstCliente;
using namespace std;

void leeRegistro(regCliente &cli);
void escribirRegistro(regCliente cli);
int main(int argc, char *argv[]){
//var
	const int M = 2;
	regCliente lista[M];
	int i;
//inicio
	//leer regsitro
	printf("Ingrese datos cliente: \n");
	i = 0;
	while( i < M){//hacer
		//iteracion
		//llamar_a 
		leeRegistro(lista[i]);

		i = i + 1;
	}//fin_mientras
	
	//escribir - visualizar
	printf("Codigo		Credito		Cancelado\n");
	i = 0;
	while( i < M){//hacer
		//iteracion
		//llamar_a 
		escribirRegistro(lista[i]);

		i = i + 1;
	}//fin_mientras

	return EXIT_SUCCESS;	
}//fin
//def. prototipos
void leeRegistro(regCliente &cli){
//var
//inicio
	scanf("%d", &cli.id);
	scanf("%f", &cli.credito);
	scanf("%d", &cli.cancelado);
}//fin_procedimiento

void escribirRegistro(regCliente cli){
//var
//inicio
	printf("%d 		", cli.id);
	printf("%.2f 		", cli.credito);
	printf("%d 		", cli.cancelado);
	printf("\n");
}//fin_procedimiento
/*
Parametros: Entrada - Salida
Algoritmos							Lenguaje C++
Entrada 	E real: sueldo			float sueldo,

Salida		S entero: cantidad		int &cantidad	(by ref)
									int *cantidad	(puntero)

*/
