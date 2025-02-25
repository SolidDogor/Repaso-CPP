#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo de funciones
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);
void eliminarLista(Nodo *&, int &);

Nodo *lista = NULL;

int main(){
		
	menu();
	
	//system("pause");
	return 0;
}

void menu(){
	int opcion,dato;
	
	do{
		cout << "\t.:MENU:.\n";
		cout << "1.- Insertar elementos a la lista\n";
		cout << "2.- Mostrar los elementos de la lista\n";
		cout << "3.- Buscar un elemento en lista\n";
		cout << "4.- Eliminar un elemento en lista\n";
		cout << "5.- Eliminar toda la lista\n";
		cout << "6.- Salir\n";
		cout << "Opcion: "; cin >> opcion;
		
		switch(opcion){
			case 1:	cout << "Digite un numero: ";
					cin >> dato;
					insertarLista(lista,dato);
					cout << "\n";
					system("pause");
					break;
			case 2: mostrarLista(lista);
					cout << "\n";
					system("pause");
					break;
			case 3: cout << "Digite el numero a buscar: ";
					cin >> dato;
					buscarLista(lista,dato);
					cout << "\n";
					system("pause");
					break;
			case 4: cout << "Digite un numero a eliminar";
					cin >> dato;
					eliminarNodo(lista,dato);
					cout << "\n";
					system("pause");
			case 5: while(lista != NULL){
						eliminarLista(lista,dato);
						cout << dato << " -> ";
					}
					cout << "\n";
					system("pause");
					break;
			case 6: cout << "Saliendo del programa..." << endl;
					break;
			default:cout << "Opcion no disponible." << endl;
					break;
		}
		system("cls");
	} while (opcion != 6);
}

void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1){
		lista = nuevo_nodo;
	} else {
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	cout << "\tElemento " << n << " insertado a la lista correctamente." << endl;
}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL){
		cout << actual->dato << " -> ";
		actual = actual->siguiente;
	}
}

void buscarLista(Nodo *lista, int n){
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual != NULL) && (actual->dato <= n)){
		if(actual->dato == n){
			band = true;
		}
		actual = actual->siguiente;
	}
	
	if(band == true) cout << "Elemento " << n << " SI ha sido encontrado." << endl;
	else cout << "Elemento " << n << " NO ha sido encontrado." << endl;
}

void eliminarNodo(Nodo *&lista, int n){
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		
		aux_borrar = lista;
		
		//Recorrer la lista
		while((aux_borrar != NULL) && (aux_borrar->dato != n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
		
		if(aux_borrar == NULL){
			cout << "Elemento no encontrado." << endl;
		} else if(anterior == NULL){
			lista = lista->siguiente;
			delete aux_borrar;
		} else {
			anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}

//Dejar vacia la lista
void eliminarLista(Nodo *&lista, int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}
