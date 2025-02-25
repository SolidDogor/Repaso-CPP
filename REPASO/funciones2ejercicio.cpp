#include <iostream>

using namespace std;

void pedirNumero();

template <typename T>
T cuadrado(T x);

float n;

int main(){
	
	pedirNumero();
	cout << cuadrado(n) << endl;
	
	system("pause");
	return 0;
}

void pedirNumero(){
	cout << "Ingrese un numero: "; cin >> n;
}

template <typename T>
T cuadrado(T x){
	return x*x;
}
