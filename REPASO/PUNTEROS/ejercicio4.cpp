#include <iostream>

using namespace std;

int main(){
	int n, numeros[100], *dir_numeros, menor = 9999999;
	
	cout << "Ingrese la cantidad de numeros a usar: "; cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "Ingrese el elemento [" << i + 1<< "]: ";
		cin >> numeros[i];
	}
	
	dir_numeros = numeros;
	
	for(int i = 0; i < n; i++){
		if(*dir_numeros < menor){
			menor = *dir_numeros;
		}
		dir_numeros++;
	}
	
	cout << "El menor numero ingresado es: " << menor << endl;
	
	system("pause");
	return 0;
}
