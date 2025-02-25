#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int suma, n;
	
	cout << "Ingrese el numero: "; cin >> n;
	
	for (int i = 1; i <= n; i++){
		suma += pow(2, i);
	}
	
	cout << "Suma: " << suma << endl;
	
	return 0;
}
