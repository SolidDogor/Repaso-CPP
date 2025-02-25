#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};

void mostrarOpciones();
void agregarPila(Nodo *&, char);
void mostrarPila(Nodo *&);

int main(){
	Nodo *pila = NULL;
	int respuesta;
	char caracter;
	do{
		mostrarOpciones();
		cout << "Ingrese su opcion: "; cin >> respuesta;
		switch(respuesta){
			case 1: cout << "Digite un caracter: "; cin >> caracter;
					agregarPila(pila,caracter); break;
			case 2: cout << "Mostrando pila:" << endl;
					mostrarPila(pila);
					break;
			case 3: cout << "Saliendo del programa..." << endl;
					break;
		}
	} while(respuesta != 3);

	//system("pause");
	return 0;
}

void mostrarOpciones(){
	cout << "1.- Agregar elemento a la pila" << endl;
	cout << "2.- Mostrar elementos de la pila " << endl;
	cout << "3.- Salir " << endl;
}

void agregarPila(Nodo *&pila, char c){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = c;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
}

void mostrarPila(Nodo *&pila){
    Nodo *actual = pila; 			// Apuntamos al tope de la pila
    while (actual != NULL) { 		// Mientras no lleguemos al final de la pila
        cout << actual->dato << " "; // Mostramos el dato del nodo actual
        actual = actual->siguiente; // Pasamos al siguiente nodo
    }
    cout << endl;
}
