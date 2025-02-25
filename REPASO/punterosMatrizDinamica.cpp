#include <iostream>

using namespace std;

//Prototipo de función
void pedirDatos();
void mostrarMatriz(int **,int,int);

int **puntero_matriz,nFilas,nColum;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nColum);
	
	//Liberar la memoria que hemos utilizado en la matriz
	for(int i = 0; i < nFilas; i++){
		delete[] puntero_matriz[i];
	}
	
	delete[] puntero_matriz;
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout << "Digite el numero de filas: ";
	cin >> nFilas;
	cout << "Digite el numero de columnas: ";
	cin >> nColum;
	
	//Reservar memoria para la matriz dinámica
	puntero_matriz = new int*[nFilas];	//Reservando memoria para las filas
	for(int i = 0; i < nFilas; i++){
		puntero_matriz[i] = new int[nColum];	//Reservando memoria para las columnas
	}
	
	cout << "\nDigitando elementos de la matriz: \n";
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColum; j++){
			cout << "Digite un numero[" << i << "][" << j << "]: ";
			cin >> *(*(puntero_matriz+i)+j);	//puntero_matriz[i][j]
		}
	}
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nColum){
	cout << "\n\nImprimiendo matriz:\n";
	for(int i = 0; i < nFilas; i++){
		for(int j = 0; j < nColum; j++){
			cout << *(*(puntero_matriz+i)+j) << " ";	//puntero_matriz[i][j]
		}
		cout << "\n";
	}
}
