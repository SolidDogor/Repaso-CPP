#include <iostream>

using namespace std;

void aniadirElementos(int vec[], int tam);
void sumarElementos(int vec[], int tam);

int main(){
	
	int n;
	
	cout << "Ingrese el tamanio del arreglo: "; cin >> n;
	
	int vec[n];
	
	aniadirElementos(vec,n);
	sumarElementos(vec,n);
	
	system("pause");
	return 0;
}

void aniadirElementos(int vec[], int n){
	for(int i = 0; i < n; i++){
		cout << "Ingrese el valor #" << i + 1 << ": ";
		cin >> vec[i];
	}
}

void sumarElementos(int vec[], int n){
	int suma;
	for(int i = 0; i < n; i++){
		suma += vec[i];
	}
	cout << "La suma de los elementos es: " << suma << endl;
}
