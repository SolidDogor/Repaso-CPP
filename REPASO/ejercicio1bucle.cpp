#include <iostream>

using namespace std;

int verificarNumero(int numero){
	if (numero < 1 || numero > 10) {
		return 0;
	}
	return numero;
}

void tablaDeMultiplicar(int numeroVerificado){
	int producto;
	if(numeroVerificado == 0){
		cout << "NUMERO FUERA DE RANGO!" << endl;
	} else {
		for (int i = 1; i <= 10; i++){
			producto = i * numeroVerificado;
			cout << i << "x" << numeroVerificado << " = " << producto << endl;
		}
	}
}

int main() {
	
	int numero;
	
	cout << "Ingrese un numero [1-10]: "; cin >> numero;
	
	tablaDeMultiplicar(verificarNumero(numero));
	
}
