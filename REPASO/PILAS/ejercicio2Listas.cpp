#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	float dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main(){
	Nodo *lista = NULL;
	float dato;
	char respuesta;
	
	do{
		cout << "Digite un numero: ";
		cin >> dato;
		insertarLista(lista,dato);
		
		cout << "Desea agregar otro nodo? [S || N]";
		cin >> respuesta;
	} while(respuesta == 's' || respuesta == 'S');
	
	calcularSumaPromedio(lista);
	
	system("pause");
	return 0;
}

void insertarLista(Nodo *&lista, float n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
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
	while(lista != NULL){
		cout << lista->dato << "->";
		lista = lista->siguiente;
	}
	cout << endl;
}

void calcularSumaPromedio(Nodo *lista){
	float suma = 0, promedio = 0, cantidadNodos = 0;
	while(lista != NULL){
		suma += lista->dato;
		lista = lista->siguiente;
		cantidadNodos++;
	}
	promedio = suma / cantidadNodos;
	
	cout << "Suma total de todos los nodos: " << suma << endl;
	cout << "Promedio de todos los nodos: " << promedio << endl;
}
