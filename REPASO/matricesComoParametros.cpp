#include <iostream>

using namespace std;

void mostrarMatriz(int m[/*El numero de filas no es obligatoria*/][3],int,int);
void elevarAlCuadrado(int m[][3],int,int);

int main(){
	const int NFILAS = 2;
	const int NCOLUM = 3;
	int m[NFILAS][NCOLUM] = {{1,2,3},{4,5,6}};
	
	cout << "Mostrando matriz original: " << endl;
	mostrarMatriz(m,NFILAS,NCOLUM);
	
	elevarAlCuadrado(m,NFILAS,NCOLUM);
	
	cout << "Mostrando matriz elevada al cuadrado: " << endl;
	mostrarMatriz(m,NFILAS,NCOLUM);
	
	system("pause");
	return 0;	
}

void mostrarMatriz(int m[][3],int nfilas, int ncolum){
	for(int i = 0; i < nfilas; i++){
		for(int j = 0; j < ncolum; j++){
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

void elevarAlCuadrado(int m[][3],int nfilas,int ncolum){
	for(int i = 0; i < nfilas; i++){
		for(int j = 0; j < ncolum; j++){
			m[i][j] *= m[i][j];
		}
	}
}
