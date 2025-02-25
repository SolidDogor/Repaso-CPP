#include <iostream>
#include <stdlib.h>

using namespace std;

//Prototipo de funcion
void pedirNotas();
void mostrarNotas();

int numCalif,*calif;

int main(){
	pedirNotas();
	mostrarNotas();
	
	delete[] calif;	//Liberar el espacio en bytes utilizado anteriormente
	
	system("pause");
	return 0;
}

void pedirNotas(){
	cout << "Digite el numero de calificaciones: ";
	cin >> numCalif;
	
	calif = new int[numCalif];
	
	for(int i = 0; i < numCalif; i++){
		cout << "Ingrese la nota #" << i + 1 << ": ";
		cin >> calif[i];
	}
}

void mostrarNotas(){
	cout << "\nMostrando las notas del usuario\n";
	for(int i = 0; i < numCalif; i++){
		cout << "Nota #" << i + 1 << ": " << calif[i] << endl;
	}
}
