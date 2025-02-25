#include <iostream>
#include <string.h>

using namespace std;

//Prototipo de funcion
void pedirDatos();
int cantidadVocales(char *);

char nombreUsuario[30];

int main(){
	pedirDatos();
	cout << "Cantidad de vocales en el nombre: " << cantidadVocales(nombreUsuario) << endl;

	//nombreUsuario = &nombreUsuario[0];
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout << "Digite su nombre: ";
	cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario);	//Transformando el nombre a mayusculas	
}

int cantidadVocales(char *nombre){
	int contador = 0;
	
	while(*nombre){	//Mientras nombre no sea nulo, se busca en la siguiente posicion
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': contador++;
		}
		nombre++;
	}
	
	return contador;
}
