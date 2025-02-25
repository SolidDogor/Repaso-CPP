#include <iostream>

using namespace std;

int main() {
	
	int n, suma = 0, factorial = 1;
	
	cout << "Digite un numero: "; cin >> n;

	for (int i = 1; i <= n; i++) {
        factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        suma += factorial;
    }
	
	cout << "Suma de " << n << " factoriales = " << suma << endl;
	
	return 0;
}
