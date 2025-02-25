#include <iostream>

using namespace std;

int main() {
	
	int sum, num;
	
	do  {
		cout << "Ingrese un numero" << endl;
		cin >> num;
		if (num != 0) {
			sum += num;
		}
	} while (num != 0 && (num < 20 || num > 30));
	
	cout << "Suma de numeros: " << sum << endl;
	
	return 0;
}
