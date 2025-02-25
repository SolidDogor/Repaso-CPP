//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	double r;
	int num1,num2,opc;	
	string operacion;
	//entrada
	cout<<"Ingresar numero 1:";cin>>num1;
	cout<<"Ingresar numero 2:";cin>>num2;
	cout<<"Ingresar opcion[1,2,3,4]:";cin>>opc;
	//proceso
	switch(opc){
		case 1:
			r=num1+num2;
			operacion="Suma";
			break;
		case 2:
			r=num1-num2;
			operacion="Resta";
			break;
		case 3:
			r=num1*num2;
			operacion="Multiplicacion";
			break;
		case 4:
			r=num1/num2;
			operacion="Division";
			operacion="Division";
			break;
		default:
			operacion="invalido";
			r=0;
			break;
			}
	//salida
	cout<<"La operacion es: "<<operacion<<"."<<endl;
	cout<<"El resultado es: "<<r<<"."<<endl;

system ("pause");

}
