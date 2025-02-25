#include <iostream>

using namespace std;

int main(){
	int numero, *dir_numero, contador = 0;
	
	cout << "Ingrese el numero: "; cin >> numero;
	
	dir_numero = &numero;
	
	for(int i = *dir_numero; i > 0; i--){
		if(*dir_numero%i == 0){
			contador++;
		}
	}

	if(contador > 2){
		cout << "El numero no es primo." << endl;
		cout << "Direccion de memoria: " << dir_numero << endl;
	} else {
		cout << "El numero es primo." << endl;
		cout << "Direccion de memoria: " << dir_numero << endl;
	}
	
	
	system("pause");
	return 0;
}
