#include <iostream>

using namespace std;

int main(){
	
	int matriz[100][100], f, c;
	
	cout << "Ingrese el numero de filas: "; cin >> f;
	cout << "Ingrese el numero de columnas: "; cin >> c;
	
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			cout << "Ingrese el numero en la fila " << i + 1 << " y columna " << j + 1 << ": ";
			cin >> matriz[i][j];
		}
	}
	
	cout << "Matriz: " << endl;
	
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			cout << matriz[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
