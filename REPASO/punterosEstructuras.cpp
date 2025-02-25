#include <iostream>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
}persona, *puntero_persona = &persona;

void pedirDatos();	//Prototipo de función
void mostrarDatos(Persona *);

int main(){
	pedirDatos();
	mostrarDatos(puntero_persona);	
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout << "Digite su nombre: ";
	cin.getline(puntero_persona->nombre,30,'\n');
	cout << "Digite su edad: ";
	cin >> puntero_persona->edad;	
}

void mostrarDatos(Persona *puntero_persona){
	cout << "\nNombre: " << puntero_persona->nombre << endl;
	cout << "Edad: " << puntero_persona->edad << endl;
}
