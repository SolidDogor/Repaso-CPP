#include <iostream>

using namespace std;

int main() {
	
	int suma;
	
	for (int i = 1; i < 11; i++) {
		suma += i*i;
	}
	
	cout << "Suma total:" << suma << endl;
	
	return 0;
}
