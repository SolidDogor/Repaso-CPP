#include <iostream>

using namespace std;

int main(){
	int numeros[10],*dir_numeros;
	
	for(int i = 0; i < 10; i++){
		cout << "Ingrese el #" << i << " del arreglo: ";
		cin >> numeros[i];
	}
	
	dir_numeros = numeros;	//Posicion de memoria donde comienza numeros
	
	for(int i = 0; i < 10; i++){
		if(*dir_numeros% 2 == 0){
			cout << "El numero " << *dir_numeros << " es par." << endl;
			cout << "Posicion de memoria: " << dir_numeros << endl;
		}
		dir_numeros++;
	}
	
	system("pause");
	return 0;
}
