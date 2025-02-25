#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	
	int numero, dato, contador = 0;
	
	srand(time(NULL));	//generar un numero aleatorio
	dato = 1 + rand()%(100);
	
	do {
		cout << "Digite un numero: "; cin >> numero;
		
		if (numero > dato) {
			cout << "El numero es menor." << endl;
		} 
		if (numero < dato){
			cout << "El numero es mayor." << endl;
		}
		contador++;
	} while (numero != dato);
	
	cout << "Felicidades! Encontraste el numero!" << endl;
	cout << "Numero de intentos: " << contador << endl;
	
	system("pause");
	return 0;
}
