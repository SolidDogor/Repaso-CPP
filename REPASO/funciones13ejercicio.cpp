#include <iostream>

using namespace std;

void aniadirElementos(int vec[], int tam);
void cambiarSigno(int vec[], int tam);
void muestra(int vec[], int tam);

int main(){
	
	int tam;
	cout << "Ingrese el tamanio del vector: "; cin >> tam;
	
	int vec[tam];
	
	aniadirElementos(vec,tam);
	cambiarSigno(vec,tam);
	muestra(vec,tam);
	
	system("pause");
	return 0;
}

void aniadirElementos(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		cout << "Ingrese el elemento #" << i + 1 << ": ";
		cin >> vec[i];
	}
}

void cambiarSigno(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		vec[i] *= -1;
	}
}

void muestra(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		cout << vec[i] << " ";
	}
	cout << endl;
}
