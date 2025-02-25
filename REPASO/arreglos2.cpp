#include "header.h"

int main(){
	
	int tamanioArreglo = 0, a = 0, sumaNotas = 0;
	
	cout<<"Por favor, digita cuantas notas quieres registrar: ";
	cin>>tamanioArreglo;
	
	int notas[tamanioArreglo];
	
	for(int x = 0; x < tamanioArreglo; x++){
		
		cout<<"Ingresa la nota #"<<x + 1<<": ";
		cin>>a;
		notas[x] = a;
		sumaNotas += notas[x];
	}
		
	cout<<"Tu promedio de nota es: "<<(float)sumaNotas / tamanioArreglo;
	
	return 0;
}
