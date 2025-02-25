#include <iostream>
#include <string.h>

using namespace std;

void pedirDatos();
void contarVocales(char *);

char cadena[30];

int main(){
	pedirDatos();
	contarVocales(cadena);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout << "Digite su palabra: ";
	cin.getline(cadena,30,'\n');
	
	strupr(cadena);
}

void contarVocales(char *cadena){
	int cant_a = 0, cant_e = 0, cant_i = 0, cant_o = 0, cant_u = 0;
	while(*cadena){
		switch(*cadena){
			case 'A': cant_a++; break;
			case 'E': cant_e++; break;
			case 'I': cant_i++; break;
			case 'O': cant_o++; break;
			case 'U': cant_u++; break;
		}
		cadena++;
	}
	
	cout << "Cantidad de A:" << cant_a << endl;
	cout << "Cantidad de E:" << cant_e << endl;
	cout << "Cantidad de I:" << cant_i << endl;
	cout << "Cantidad de O:" << cant_o << endl;
	cout << "Cantidad de U:" << cant_u << endl;
}
