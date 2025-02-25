#include <iostream>

using namespace std;

int main() {
	
	int cantidadNoCeros, num;
	
	do  {
		cout << "Ingrese un numero" << endl;
		cin >> num;
		if (num != 0) {
			cantidadNoCeros ++;
		}
	} while (num != 0);
	
	cout << "Numeros mayores que cero: " << cantidadNoCeros << endl;
	
	return 0;
}
