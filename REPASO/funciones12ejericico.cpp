#include <iostream>

using namespace std;

void aniadirElementos(int vec[], int tam);
void verificarOrden(int vec[], int tam);

int main(){
	
	int tam;
	
	cout << "Ingrese el tamanio del vector: "; cin >> tam;
	
	int vec[tam];
	
	aniadirElementos(vec,tam);
	verificarOrden(vec,tam);
	
	system("pause");
	return 0;
}

void aniadirElementos(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		cout << "Ingrese el elemento #" << i + 1 << ": ";
		cin >> vec[i];
	}
}

void verificarOrden(int vec[], int tam){
	char bandera;
	for(int i = 0; i < tam; i ++){
		if(vec[i] > vec[i+1]){
			cout << "Arreglo en desorden." << endl;
			bandera = 'F';
			break;
		}
	}
	if(bandera != 'F'){
		cout << "Arreglo en orden." << endl;
	}
}
