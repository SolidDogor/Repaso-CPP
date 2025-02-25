#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};

//Prototipos de funciones
void menu();
void agregarCola(Nodo *&, Nodo *&, char);
bool colaVacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, char &);

int main(){
	menu();
	
	//system("pause");
	return 0;
}

void menu(){
	int opc;
	char dato;
	
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	do{
		cout << "\t.:MENU:.\n";
		cout << "1.- Insertar un caracter en la cola" << endl;
		cout << "2.- Mostrar todos los elementos de la cola" << endl;
		cout << "3.- Salir del programa" << endl;
		cout << "Opcion: "; cin >> opc;
		
		switch(opc){
			case 1: cout << "\nIngrese su caracter para añadir a la cola: ";
					cin >> dato;
					agregarCola(frente,fin,dato);
					break;
			case 2: cout << "\nMostrando los elementos de la cola: ";
					while(frente != NULL){
						suprimirCola(frente,fin,dato);
						if(frente != NULL) cout << dato << " , ";
						else cout << dato << "." << endl;
					}
					cout << "\n";
					system("pause");
					break;
			case 3: break;
			default: cout << "Opcion no valida. Digite de nuevo.";
					break;
		}
		system("cls");
	} while(opc != 3);
}

void agregarCola(Nodo *&frente, Nodo *&fin, char c){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = c;
	nuevo_nodo->siguiente = NULL;
	
	if(colaVacia(frente)) frente = nuevo_nodo;
	else fin->siguiente = nuevo_nodo;
	
	fin = nuevo_nodo;
}

bool colaVacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

void suprimirCola(Nodo *&frente, Nodo *&fin, char &c){
	c = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin) {
		frente = NULL; fin = NULL;
	} else {
		frente = frente->siguiente;
	}
	
	delete aux;
}
