#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char nombre[30];
	
	cout << "Ingrese su nombre: "; cin.getline(nombre,30,'\n');
	if (nombre[0] == 'A'){
		strlwr(nombre);
		cout << "Nombre: " << nombre << endl;
	} else {
		cout << "Nombre: " << nombre << endl;
	}
	
	system("pause");
	return 0;
}
