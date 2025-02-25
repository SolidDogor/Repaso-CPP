#include <iostream>

using namespace std;

int sumar(int);

int main(){
	
	int n;
	do{
		cout << "Ingrese el valor donde se detendrá la suma: "; cin >> n;
	}while(n <= 0);

	cout << "Suma: " << sumar(n) << endl;
	
	system("pause");
	return 0;
}

int sumar(int n){
	int suma = 0;
	if(n == 1){
		return 1;
	} else {
		suma = n + sumar(n - 1);
	}
	return suma;
}

