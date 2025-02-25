#include <iostream>

using namespace std;

int main() {
	
	int n, suma;
	
	cout << "Ingrese un numero para el final de la serie: "; cin >> n;
	
	for (int i = 1; i <= n; i++){
		if(i%2==0){
			suma -= i;
		} else {
			suma += i;
		}
	}
	
	cout << "Suma: " << suma << endl;
		
	return 0;
}
