#include <iostream>

using namespace std;

int main(){
	
	int matriz1[3][3], matriz2[3][3], suma[3][3];
	
	cout << "Primera matriz: ";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Ingrese el numero de [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz1[i][j];
		}
	}
	
	cout << "Segunda matriz: ";
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Ingrese el numero de [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz2[i][j];
		}
	}
	
	cout << "Suma de matrices: " << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			suma[i][j] = matriz1[i][j] + matriz2[i][j];
			cout << suma[i][j];
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
