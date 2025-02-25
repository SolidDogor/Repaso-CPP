#include <iostream>

using namespace std;

int main(){
	
	int matriz[3][3], traspuesta[3][3];
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Ingrese el numero de [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz[i][j];
			traspuesta[j][i] = matriz[i][j];
		}
	}
	
	cout << "Traspuesta: " << endl;
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << traspuesta[i][j];
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
