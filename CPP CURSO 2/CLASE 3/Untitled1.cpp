/******************************************************************************
Algoritmo. credito cliente
tipo
	regristo: regCliente
		entero: id
		real: credito
		logico: cancelado
	fin_registro
var
	regCliente: cliente, customer = {1111, 2000,00, falso}
inicio
	//asignacion - almacenar informacion
	//cliente.id <- 1111
	//cliente.credito <- 2000.00
	//cliente.cancelado <- falso

	customer <- cliente

	//escribir - visualizar
	escribir("Codigo   : ", customer.id)
	escribir("Credito  : ", customer.credito)
	escribir("Cancelado: ", customer.cancelado)

fin
def. prototipos

*******************************************************************************/
//Algoritmo. credito cliente
#include <cstdlib>
#include <iostream>
//tipo
	struct regCliente{
		int id;
		float credito;
		bool cancelado;									//0-false 1-true
	};//fin_registro
using namespace std;

int main(int argc, char *argv[]){
//var
	regCliente cliente, customer = {1111, 2000.00, false};
//inicio
	//asignacion - almacenar informacion
	//cliente.id = 1111;
	//cliente.credito = 2000.00;
	//cliente.cancelado = false;
	
	//asignacion
	customer = cliente;

	//escribir - visualizar
	printf("Codigo   : %d\n", customer.id);
	printf("Credito  : %.2f\n", customer.credito);
	printf("Cancelado: %d\n", customer.cancelado);

	return EXIT_SUCCESS;	
}//fin
//def. prototipos
