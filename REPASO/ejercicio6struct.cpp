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
}alumnos[100];

int main(){
	
	float pro_alto = 0, promedio;
	int alu_pro_alto, n;
	char nom[20];
	
	cout << "Digite la cantidad de alumnos: "; cin >> n;
	
	for(int i = 0; i < n; i++){
		fflush(stdin);
		cout << "\n---DATOS DEL ALUMNO #" << i + 1 << "---" << endl;
		cout << "Ingrese el nombre: ";
		cin.getline(alumnos[i].nombre,20,'\n');
		cout << "Ingrese la edad: ";
		cin >> alumnos[i].edad;
		cout << "Ingrese el genero: ";
		cin >> alumnos[i].genero;
		strcpy(nom,alumnos[i].nombre);
		cout << "\n---NOTAS DE " << strupr(nom) << "---" << endl;
		cout << "Ingrese la nota 1: ";
		cin >> alumnos[i].prom.nota1;
		cout << "Ingrese la nota 2: ";
		cin >> alumnos[i].prom.nota2;
		cout << "Ingrese la nota 3: ";
		cin >> alumnos[i].prom.nota3;
	
		promedio = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;
		
		if(promedio > pro_alto){
			pro_alto = promedio;
			alu_pro_alto = i;
		}
	}
	
	strcpy(nom,alumnos[alu_pro_alto].nombre);
	
	cout << "\n------MEJOR PROMEDIO------" << endl;
	cout << "---DATOS DE " << nom << "---" << endl;
	cout << "Nombre: " << alumnos[alu_pro_alto].nombre << endl;
	cout << "Edad: " << alumnos[alu_pro_alto].edad << endl;
	cout << "Genero: " << alumnos[alu_pro_alto].genero << endl;
	cout << "Promedio: " << pro_alto << endl;
	
	system("pause");
	return 0;
}
