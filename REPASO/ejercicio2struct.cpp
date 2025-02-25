#include <iostream>
#include <string.h>

using namespace std;

struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];

int main(){
	
	float pro_alto = 0;
	int alu_pro_alto;
	
	for(int i = 0; i < 3; i++){
		cout << "\nDATOS DEL ALUMNO #" << i + 1 << endl;
		cout << "Ingrese el nombre: ";
		cin.getline(alumnos[i].nombre,20,'\n');
		cout << "Ingrese la edad: ";
		cin >> alumnos[i].edad;
		cout << "Ingrese el promedio: ";
		cin >> alumnos[i].promedio;
		fflush(stdin);
		
		if(alumnos[i].promedio > pro_alto){
			pro_alto = alumnos[i].promedio;
			alu_pro_alto = i;
		}
	}
	
	
	cout << "\n---DATOS DEL ALUMNO CON PROMEDIO MAS ALTO---" << endl;
	cout << "Nombre: " << alumnos[alu_pro_alto].nombre << endl;
	cout << "Edad: " << alumnos[alu_pro_alto].edad << endl;
	cout << "Promedio: " << alumnos[alu_pro_alto].promedio << endl;
	
	system("pause");
	return 0;
}
