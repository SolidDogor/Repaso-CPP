#include <iostream>
#include <stdlib.h>	//Para reservar espacio de memoria para los nodos

using namespace std;

int main(){
	
	struct nodo{
		int n;
		nodo *sig;	
	}*cab = NULL, *aux, *aux1;
	
	aux = (nodo*) malloc(sizeof (struct nodo));
	
	cout<<"Por favor ingresa un dato: ";
	cin>>aux->n;
	
	if(cab == NULL){
		cab = aux1 = aux;
	} else {
		aux1 -> aux;
		aux1 = aux;
		aux1 -> sig = NULL;
	}
	
	return 0;
}
