#include <iostream>

using namespace std;

void aniadirElementos(int m[][100],int,int);
void menorNumeroFila(int m[][100],int,int);

int m[100][100], nfilas, ncolum;

int main(){
	
	int menor_n;
	
	cout << "Ingrese el numero de filas: "; cin >> nfilas;
	cout << "Ingrese el numero de columnas: "; cin >> ncolum;
	
	aniadirElementos(m,nfilas,ncolum);
	
	cout << "Ingrese la fila en la que quiere buscar su menor numero: ";
	cin >> menor_n;
	
	menorNumeroFila(m,ncolum,menor_n);
	
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

void menorNumeroFila(int m[][100], int ncolum, int num_menor){
    int menor = m[num_menor - 1][0];
    for(int j = 0; j < ncolum; j++){
        if(m[num_menor - 1][j] < menor){
            menor = m[num_menor - 1][j];
        }
    }
    cout << "Menor numero en la fila " << num_menor << ": " << menor << endl;
}
