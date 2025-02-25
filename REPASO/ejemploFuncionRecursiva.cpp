#include <iostream>

using namespace std;

int factorial(int);

int main(){
	
	int n;
	
	cout << "Ingrese su numero: "; cin >> n;
	
	cout << "Factorial de " << n << ": " << factorial(n) << endl;;
	
	system("pause");
	return 0;
}

int factorial(int n){
	if(n == 0){	//Caso base
		n = 1;
	} else {	//Caso general
		n = n * factorial(n - 1);
	}
	return n;
}
