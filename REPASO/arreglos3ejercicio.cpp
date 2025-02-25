#include <iostream>

using namespace std;

int main() {
	
	int numeros[100], n;
	
	cout << "Cuantos numeros tendra el arreglo?"; cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "Ingrese un numero: "; cin >> numeros[i];
	}
	
	for (int i = 0; i < n; i++) {
		cout << i << ".- " << numeros[i] << endl;
	}
	
	system("pause");
	return 0;
}
