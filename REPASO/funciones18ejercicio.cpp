#include <iostream>

using namespace std;

struct Fecha{
	int dia,mes,anio;
}f1,f2;

void pedirDatos();
Fecha fechaMayor(Fecha,Fecha);
void muestra(Fecha);

int main(){
	
	pedirDatos(),
	muestra(fechaMayor(f1,f2));
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout << "Ingrese el dia de la primera fecha: "; cin >> f1.dia;
	cout << "Ingrese el mes de la primera fecha: "; cin >> f1.mes;
	cout << "Ingrese el anio de la primera fecha: "; cin >> f1.anio;
	cout << "Ingrese el dia de la segunda fecha: "; cin >> f2.dia;
	cout << "Ingrese el mes de la segunda fecha: "; cin >> f2.mes;
	cout << "Ingrese el anio de la segunda fecha: "; cin >> f2.anio;
}

Fecha fechaMayor(Fecha f1, Fecha f2){
	if(f1.anio < f2.anio){
		return f1;
	} else if(f2.anio < f1.anio) {
		return f2;
	} else {
		if(f1.mes > f2.mes){
			return f1;
		} else if(f2.mes > f1.mes){
			return f2;
		} else {
			if(f1.dia > f2.dia){
				return f1;
			} else if(f2.dia > f1.dia){
				return f2;
			} else {
				f1.dia = -1;
				return f1;
			}
		}
	}
}

void muestra(Fecha x){
	if(x.dia == -1){
		cout << "Ambos dias son iguales." << endl;
	} else {
		cout << "Fecha Mayor" << endl;
		cout << x.dia << "/" << x.mes << "/" << x.anio << endl;	
	}
}
