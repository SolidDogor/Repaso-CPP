#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
	Nodo *pila = NULL;
	int dato;
	char respuesta;
	do{
		cout << "Digite un numero: ";
		cin >> dato;
		agregarPila(pila,dato);
		
		cout << "Desea agregar otro elemento a PILA? [si = S || no = N]: ";
		cin >> respuesta;
	}while((respuesta == 'S') || (respuesta == 's'));
	
	cout << "Sacando todos los elementos de PILA: ";
	while(pila != NULL){	//Mientras no sea el final de la pila
		sacarPila(pila,dato);
		if(pila != NULL) cout << dato << " , ";
		else cout << dato << "." << endl;
	}
	system("pause");
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout << "\tElemento " << n << " agregado a PILA correctamente." << endl;
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
