#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);

int main(){
	Nodo *lista = NULL;
	int dato;
	char respuesta;
	do{
		cout << "Digite un numero: ";
		cin >> dato;
		insertarLista(lista,dato);	//Agregando un nuevo elemento a la lista
		
		cout << "Desea agregar otro nodo? [S||N]";
		cin >> respuesta;
	} while(respuesta == 'S' || respuesta == 's');
	
	cout << "Elementos en la lista: ";
	mostrarLista(lista);
	
	calcularMayorMenor(lista);
	
	system("pause");
	return 0;
}

//Agregar elementos al final de la lista
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	//Rellenando campos de nuevo_nodo
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){		//Si la lista está vacía...
		lista = nuevo_nodo;	//...agregamos el primer elemento a la lista
	} else {
		aux = lista;					//aux apunta al inicio de la lista
		while(aux->siguiente != NULL){	//recorrer la lista
			aux = aux->siguiente;		//avanzamos posiciones en la lista
		}
		aux->siguiente = nuevo_nodo;	//agrego el nuevo_nodo a la lista
	}
	
	cout << "Elemento " << n << " agregado a la lista correctamente" << endl;
}

void mostrarLista(Nodo *lista){
	while(lista != NULL){			//Mientras no sea el final de la lista
		cout << lista->dato << "->";
		lista = lista->siguiente;	//Avanzamos una posición en la lista
	}
	cout << endl;
}

void calcularMayorMenor(Nodo *lista){
	int mayor = 0;
	int menor = 999999;
	
	while(lista != NULL){
		if((lista->dato) < menor){	//Calculando el menor elemento
			menor = lista->dato;
		}
		if((lista->dato) > mayor){	//Calculando el mayor elemento
			mayor = lista->dato;
		}
		lista = lista->siguiente;	//Avanzamos una posición en la lista
	}
	
	cout << "El mayor elemento es: " << mayor << endl;
	cout << "El menor elemento es: " << menor << endl;
}
