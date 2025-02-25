#include <iostream>

using namespace std;

int main(){
	
	int matriz1[2][2], matriz2[2][2];
	
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << "Ingrese el numero de [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz1[i][j];
			matriz2[i][j] = matriz1[i][j];
		}
	}
	
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			cout << matriz2[i][j];
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
