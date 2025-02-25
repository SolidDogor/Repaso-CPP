#include <iostream>

using namespace std;

int main(){
	int numero, *dir_numero;
	
	cout << "Ingrese el numero: "; cin >> numero;
	
	dir_numero = &numero;	//Guardando la posición de memoria
	
	if(*dir_numero % 2 == 0){
		cout << "El numero " << *dir_numero << " es par." << endl;
		cout << "Posicion de memoria: " << dir_numero << endl;
	} else { 
		cout << "El numero " << *dir_numero << " es impar." << endl;
		cout << "Posicion de memoria: " << dir_numero << endl;
	}
	
	system("pause");
	return 0;
}
