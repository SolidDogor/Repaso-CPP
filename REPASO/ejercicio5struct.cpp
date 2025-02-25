#include <iostream>
#include <string.h>

using namespace std;

struct Promedio{
	int nota1;
	int nota2;
	int nota3;
};

struct Alumno{
	char nombre[20];
	int edad;
	char genero[10];
	struct Promedio prom;
}alu;

int main(){
	
	char nom[20];
	
	cout << "---DATOS DEL ALUMNO---" << endl;
	cout << "Ingrese el nombre: ";
	cin.getline(alu.nombre,20,'\n');
	strcpy(nom,alu.nombre);
	cout << "Ingrese la edad: ";
	cin >> alu.edad;
	cout << "Ingrese el genero: ";
	cin >> alu.genero;
	
	cout << "\n---NOTAS DE " << strupr(nom) << "---" << endl;
	cout << "Ingrese la nota 1: ";
	cin >> alu.prom.nota1;
	cout << "Ingrese la nota 2: ";
	cin >> alu.prom.nota2;
	cout << "Ingrese la nota 3: ";
	cin >> alu.prom.nota3;
		
	float promedio = (alu.prom.nota1 + alu.prom.nota2 + alu.prom.nota3) / 3;
	
	cout << "\n---DATOS DE " << nom << "---" << endl;
	cout << "Nombre: " << alu.nombre << endl;
	cout << "Edad: " << alu.edad << endl;
	cout << "Genero: " << alu.genero << endl;
	cout << "Promedio: " << promedio << endl;
	
	system("pause");
	return 0;
}
