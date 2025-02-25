/******************************************************************************
Algoritmo. credito cliente
tipo
	regristo: regCliente
		entero: id
		real: credito
		logico: cancelado
	fin_registro
var
	regCliente: cliente, customer
inicio
	//leer registro
	escribir("Ingrese datos cliente: ")
	llamar_a leeRegristro(cliente)

	customer <- cliente

	//escribir - visualizar
	llamar_a escribirRegristro(customer)

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
		bool cancelado;									//0-false 1-true
	};//fin_registro
using namespace std;

void leeRegistro(regCliente &cli);
void escribirRegistro(regCliente cli);
int main(int argc, char *argv[]){
//var
	regCliente cliente, customer;
//inicio
	//leer regsitro
	printf("Ingrese datos cliente: \n");
	//llamar_a
	leeRegistro(cliente);
	
	//asignacion
	customer = cliente;

	//escribir - visualizar
	escribirRegistro(customer);

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
	printf("Codigo   : %d\n", cli.id);
	printf("Credito  : %.2f\n", cli.credito);
	printf("Cancelado: %d\n", cli.cancelado);
}//fin_procedimiento
