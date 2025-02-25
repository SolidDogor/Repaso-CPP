#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	
	float altura = 0;
	float peso = 0;
	float ibm = 0;
	
	cout<<"Calculadora de Indice de Masa Corporal (IBM)\n";
	cout<<"Ingrese su peso (kilogramos): ";
	cin>>peso;
	cout<<"Ingrese su altura (metros): ";
	cin>>altura;
	//Calculando el IBM
	ibm = peso / pow(altura,2);
	cout<<"Su IBM es: "<<setprecision(4)<<ibm<<" kg/m^2";
	
	return 0;
}
