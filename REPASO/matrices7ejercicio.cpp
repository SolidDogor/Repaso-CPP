#include <iostream>

using namespace std;

int main(){
	
	int matriz[100][100], filas, columnas;
	bool band = false;
	
	cout << "Ingrese la cantidad de filas: "; cin >> filas;
	cout << "Ingrese la cantidad de columnas: "; cin >> columnas;
	
	for (int i = 0; i < filas; i++){
		for (int j = 0; j < columnas; j++){
			cout << "Ingrese el numero de [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz[i][j];
		}
	}
	
	if (filas == columnas){
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				if (matriz[i][j] == matriz[j][i]) band = true;
			}
		}
	}
	
	if (band == true){
		cout << "La matriz es simetrica" << endl;
	} else {
		cout << "La matriz no es simetrica" << endl;
	}
	
	system("pause");
	return 0;
}
