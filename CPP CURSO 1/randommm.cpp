#include <iostream>
using namespace std;
main(){
	int edad,anio,anionacimiento;
	char sexo;
	cout<<"Ingrese su genero (m o f)";cin>>sexo;
	cout<<"Ingrese su edad: ";cin>>edad;
	cout<<"Ingrese el a�o actual: ";cin>>anio;
	anionacimiento=anio-edad;
	cout<<"Su a�o de nacimiento es: "<<anionacimiento<<endl;
	if(sexo="m"&&edad<=30){
		cout<<"Muchas gracias joven"<<endl;
	}else(sexo="m"&&edad>30){
		cout<<"Muchas gracias se�or"<<endl;
	}
	if(sexo=="f"&&edad=<30){
		cout<<"Muchas gracias joven"<<endl;
	}else(sexo=="f"&&edad>30){
		cout<<"Muchas gracias se�ora"<<endl;
	}		
	system("pause");
}
