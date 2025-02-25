/*
Realizar una calculadora de
interés compuesto
*/

#include "header.h"
#include <math.h>
#include <conio.h>
#include <clocale>

int main(){
	setlocale(LC_CTYPE,"Spanish");	//Poder colocar caracteres en español
	
	float Ci = 0;
	float Ti = 0;
	int t = 0;
	float resultado = 0;
	
	while(Ci <= 0){
		cout<<"Ingrese el capital inicial: ";
		cin>>Ci;
	}
	
	while(Ti <= 0){
		cout<<"Ingrese la tasa de interés anual: ";
		cin>>Ti;
	}
	
	while(t <= 0){
		cout<<"Ingrese el tiempo (años): ";
		cin>>t;
	}
	
	resultado = Ci * pow((1 + (Ti/100)),t);
	
	cout<<"El dinero que se generó al final de la inversión es: $"<<resultado;	
	
	getch();	//Para cuando se termine de ejecutar el programa espera
				// una tecla para continuar
	return 0;
}
