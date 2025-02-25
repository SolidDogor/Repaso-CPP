#include <iostream>

using namespace std;

int main(){
	
	int numeros[100], n, mayor = 0;
	
	cout << "Digite la cantidad de elementos: "; cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "Ingrese el numero #" << i + 1 << ": "; cin >> numeros[i];
		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
	}
	
	cout << "Numero mayor del arreglo: " << mayor << endl;
	
	system("pause");
	return 0;
}
