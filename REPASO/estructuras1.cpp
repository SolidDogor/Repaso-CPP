#include <iostream>

using namespace std;

struct cuentaBancaria {
	float dinero;
	char usuario[50];
}cuentaBancaria1;

int main(){
	
	cout<<"Ingrese su nombre de usuario: ";
	cin.getline(cuentaBancaria1.usuario,50,'\n');
	cout<<"Ingrese su cantidad de dinero: ";
	cin>>cuentaBancaria1.dinero;
	
	cout<<"---------------------------------------"<<endl;
	cout<<"INFORMACION DE USUARIO"<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"Usuario: "<<cuentaBancaria1.usuario<<endl;
	cout<<"Dinero: "<<cuentaBancaria1.dinero<<endl;
	
	return 0;
}
