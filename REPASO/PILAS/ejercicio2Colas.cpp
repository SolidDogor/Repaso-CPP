#include <iostream>
#include <stdlib.h>

using namespace std;

struct Cliente{
	float dinero;
	char nombre;
	Cliente *siguiente;
};

void insertarCola(Cliente *&, Cliente *&, float, char);
bool colaVacia(Cliente *);
void suprimirCola(Cliente *&, Cliente *&, float &, char &);

int main(){
	Cliente *frente = NULL;
	Cliente *fin = NULL;
	float d;
	char n;
	
	cout << "Ingrese el nombre del cliente: ";
	cin >> n;
	cout << "Ingrese el dinero del cliente: ";
	cin >> d;
	insertarCola(frente,fin,d,n);
	
	cout << "Ingrese el nombre del cliente: ";
	cin >> n;
	cout << "Ingrese el dinero del cliente: ";
	cin >> d;
	insertarCola(frente,fin,d,n);
	
	cout << "Ingrese el nombre del cliente: ";
	cin >> n;
	cout << "Ingrese el dinero del cliente: ";
	cin >> d;
	insertarCola(frente,fin,d,n);
	
	cout << "Ingrese el nombre del cliente: ";
	cin >> n;
	cout << "Ingrese el dinero del cliente: ";
	cin >> d;
	insertarCola(frente,fin,d,n);
	
	//Eliminar elementos de la cola
	cout << "\nQuitando elementos de la cola: ";
	while(frente != NULL){
		suprimirCola(frente,fin,d,n);
		
		if(frente != NULL) cout << n << " , ";
		else cout << n << "." << endl;
	}
	
	system("pause");
	return 0;
}

void insertarCola(Cliente *&frente, Cliente *&fin, float din, char nom){
	Cliente *nuevo_cliente = new Cliente();
	nuevo_cliente->dinero = din;
	nuevo_cliente->nombre = nom;
	nuevo_cliente->siguiente = NULL;
	
	if(colaVacia(frente)) frente = nuevo_cliente;
	else fin->siguiente = nuevo_cliente;
	
	fin = nuevo_cliente;
}

bool colaVacia(Cliente *frente){
	return (frente == NULL)? true : false;
}

void suprimirCola(Cliente *&frente, Cliente *&fin, float &din, char &nom){
	din = frente->dinero;
	nom = frente->nombre;
	Cliente *aux = frente;
	
	if(frente == fin){
		frente = NULL; fin = NULL;
	} else {
		frente = frente->siguiente;
	}
	
	delete aux;
}
