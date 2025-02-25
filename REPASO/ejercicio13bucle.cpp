#include <iostream>

using namespace std;

int fibonacci(int numero){
	if (numero == 0){
		return 0;
	} else if (numero == 1) {
		return 1;
	} else {
		return fibonacci(numero-1)+fibonacci(numero-2);
	}
}

int main() {
	
	int n;
	
	cout << "Digite un numero: "; cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << fibonacci(i) << " ";
	}
	
	return 0;
}
