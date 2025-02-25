#include <iostream>

using namespace std;

struct Complejo{
	float real,imaginaria;
}z1,z2,z3;

void pedirDatos();
Complejo sumar(Complejo,Complejo,Complejo);
void muestra(Complejo);

int main(){
	
	pedirDatos();
	
	Complejo x = sumar(z1,z2,z3);
	
	muestra(x);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout << "Ingrese los datos del primer numero complejo" << endl;
	cout << "Parte real: "; cin >> z1.real;
	cout << "Parte imaginaria: "; cin >> z1.imaginaria;

	cout << "Ingrese los datos del segundo numero complejo" << endl;
	cout << "Parte real: "; cin >> z2.real;
	cout << "Parte imaginaria: "; cin >> z2.imaginaria;
}

Complejo sumar(Complejo z1,Complejo z2,Complejo z3){
	z3.real = z1.real + z2.real;
	z3.imaginaria = z1.imaginaria + z2.imaginaria;
	
	return z3;
}

void muestra(Complejo z3){
	cout << "\nResultado de la suma: " << z3.real << "," << z3.imaginaria << endl;
}
