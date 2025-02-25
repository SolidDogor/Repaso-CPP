#include <iostream>

using namespace std;

struct Persona{
	char nombre[20];
	bool discapacidad;
}personas[100];

int main(){
	
	int n_personas, discapacitados[1], capacitados[1];
	
	cout << "Digite la cantidad de personas: "; cin >> n_personas;
	
	for(int i = 0; i < n_personas; i++){
		cout << "\nIngrese el nombre: "; cin.getline(personas[i].nombre,20,'\n');
		cout << "Es discapacitado? "; cin >> personas[i].discapacidad;
		if(personas[i].discapacidad == true){
			discapacitados.push(i);
		} else {
			capacitados.push(i);
		}
	}
	
	system("pause");
	return 0;
}
