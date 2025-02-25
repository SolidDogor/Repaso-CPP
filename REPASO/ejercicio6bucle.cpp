#include <iostream>

using namespace std;

int main() {
	
	int potencia = 1, x, y;
	
	cout << "Ingrese la base: "; cin >> x;
	cout << "Ingrese el exponente: "; cin >> y;
	
	for (int i = 0; i < y; i++){
		potencia *= x;
	}
	
	cout << x << "^" << y << " = " << potencia << endl;
	
	return 0;
}
