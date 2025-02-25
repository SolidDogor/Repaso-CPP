#include <iostream>

using namespace std;

void aniadirElementos();
void mostrarImpares(int vec[], int);

int vec[100], tam;

int main(){
	
	aniadirElementos();
	mostrarImpares(vec,tam);
	
	system("pause");
	return 0;
}

void aniadirElementos(){
	
	cout << "Ingrese el tamanio del vector: "; cin >> tam;
	
	for(int i = 0; i < tam; i++){
		cout << "Ingrese el elemento #" << i + 1 << ": ";
		cin >> vec[i];
	}
}

void mostrarImpares(int vec[], int tam){
	int cantidadImpares;
	cout << "Mostrando impares dentro del vector:" << endl;
	for(int i = 0; i < tam; i++){
		if(vec[i]%2!=0){
			cout << vec[i] << " ";
			cantidadImpares++;
		}
	}
	if(cantidadImpares == 0){
		cout << "No hay impares en este vector.";
	}
	cout << endl;
}
