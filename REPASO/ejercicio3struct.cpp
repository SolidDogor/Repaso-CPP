#include <iostream>
#include <string.h>

using namespace std;

struct Empleado{
	char nombre[20];
	float salario;
}emp[100];

int main(){
	
	int n_empleados, n_s_alto, n_s_bajo;
	float s_alto = 0, s_bajo = 99999;
	
	cout << "Digite el numero de empleados: "; cin >> n_empleados;
	
	for (int i = 0; i < n_empleados; i++){
		fflush(stdin);
		cout << "Digite el nombre del empleado #" << i + 1<< ": ";
		cin.getline(emp[i].nombre,20,'\n');
		cout << "Digite el salario del empleado #" << i + 1 << ": ";
		cin >> emp[i].salario;
		if(emp[i].salario > s_alto){
			s_alto = emp[i].salario;
			n_s_alto = i;
		}
		if(emp[i].salario < s_bajo){
			s_bajo = emp[i].salario;
			n_s_bajo = i;
		}
	}
	
	cout << "\n---DATOS EMPLEADO CON SUELDO MAS BAJO---" << endl;
	cout << "Nombre: " << emp[n_s_bajo].nombre << endl;
	cout << "Salario: " << emp[n_s_bajo].salario << endl;
	
	cout << "\n---DATOS EMPLEADO CON SUELDO MAS ALTO---" << endl;
	cout << "Nombre: " << emp[n_s_alto].nombre << endl;
	cout << "Salario: " << emp[n_s_alto].salario << endl;
	
	
	
	
	system("pause");
	return 0;
}
