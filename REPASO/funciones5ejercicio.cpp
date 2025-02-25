#include <iostream>

using namespace std;

template <typename T>
void despliegue(T valor);

int main(){
	int entero;
	float flotante;
	double doble;
	char caracter;
	
	cout << "Ingrese un entero: "; cin >> entero;
	cout << "Ingrese un doble: "; cin >> doble;
	cout << "Ingrese un flotante: "; cin >> flotante;
	cout << "Ingrese un caracter: "; cin >> caracter;
	 
	despliegue(entero);
	despliegue(flotante);
	despliegue(doble);
	despliegue(caracter);
	
	system("pause");
	return 0; 
}

template <typename T>
void despliegue(T valor){
	cout << "Valor ingresado: " << valor << endl;
}
