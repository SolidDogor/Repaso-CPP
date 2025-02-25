#include <iostream>

using namespace std;

int main() {
	
	int n, suma = 0;
	
	cout << "Escriba el valor donde se detendra la suma: "; cin >> n;
	
	for (int i = 1; i <= n; i++) {
		suma += i;
	}
	
	cout << "Suma total: " << suma << endl;
	
	return 0;
}
