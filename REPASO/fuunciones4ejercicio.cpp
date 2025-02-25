#include <iostream>

using namespace std;

void pedirNumero();
void fraccionar(float x);

float n;

int main(){
	
	pedirNumero();
	fraccionar(n);
	
	system("pause");
	return 0;
}

void pedirNumero(){
	cout << "Ingrese un numero: "; cin >> n;
}

void fraccionar(float x){
	int num = x;
	cout << "Parte fraccionaria: " << x - num << endl;
}
