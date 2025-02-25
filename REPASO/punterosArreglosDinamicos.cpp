/*Asignaci�n din�mica de arreglos

new: Reserva el n�mero de bytes solicitado por la declaraci�n
delete: Libera un bloque de bytes reservado con anterioridad

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo din�mico
*/

#include <iostream>
#include <stdlib.h>	//Con esta librer�a funciona 'new' y 'delete'

using namespace std;

//Prototipo de funci�n
void pedirNotas();
void mostrarNotas();

int numCalif,*calif;

int main(){
	
	pedirNotas();
	mostrarNotas();
	
	delete[] calif;	//Liberando el espacio en bytes utilizados anteriormente
	
	system("pause");
	return 0;
}

void pedirNotas(){
	cout << "Digite el numero de calificaciones: ";
	cin >> numCalif;
	
	calif = new int[numCalif];	//Crear arreglo de tipo din�mico
	
	for(int i = 0; i < numCalif; i++){
		cout << "Ingrese la nota #" << i + 1 << ": ";
		cin >> calif[i];
	}
	
}

void mostrarNotas(){
	cout << "\n---MOSTRANDO NOTAS DEL USUARIO---\n";
	for(int i = 0; i < numCalif; i++){
		cout << "Nota #" << i + 1 << ": " << calif[i] << endl;
	}
}
