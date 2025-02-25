#include <iostream>

using namespace std;

int main(){
	
	int matriz[3][3];
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Ingrese el numero de [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matriz[i][j];
		}
	}
	
	cout << "Diagonal principal: " << endl;
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (j != i) {
				cout << "-";
			} else {
				cout << matriz[i][j];
			}
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
