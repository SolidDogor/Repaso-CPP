#include <iostream>

using namespace std;

void aniadirElementos(int m[][100],int,int);
void verificarSimetria(int m[][100],int,int);

int main(){
	int nfilas, ncolum;
	
	cout << "Ingrese la cantidad de filas: "; cin >> nfilas;
	cout << "Ingrese la cantidad de columnas: "; cin >> ncolum;
	
	int m[100][100];
		
	if(nfilas != ncolum){
		cout << "La matriz no es simetrica" << endl;
	} else {
		aniadirElementos(m,nfilas,ncolum);
		verificarSimetria(m,nfilas,ncolum);
	}
	
	system("pause");
	return 0;		
}

void aniadirElementos(int m[][100],int nfilas,int ncolum){
	for(int i = 0; i < nfilas; i++){
		for(int j = 0; j < ncolum; j++){
			cout << "Ingrese un elemento en la posicion [" << i + 1 << "][" << j + 1<<"]: ";
			cin >> m[i][j];
		}
	}
}

void verificarSimetria(int m[][100],int nfilas,int ncolum){
	char bandera;
	for(int i = 0; i < nfilas; i++){
		for(int j = 0; j < ncolum; j++){
			if(m[i][j] != m[j][i]){
				bandera = 'F';
				break;
			}
		}
	}
	if (bandera != 'F'){
		cout << "La matriz es simetrica." << endl;
	} else {
		cout << "La matriz no es simetrica." << endl;
	}
}
