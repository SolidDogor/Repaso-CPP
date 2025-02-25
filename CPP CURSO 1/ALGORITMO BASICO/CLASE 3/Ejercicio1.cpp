///libreria de entrada/salida de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	double ms,tc,md;
	//entrada de datos
	cout<<"Ingresar monto en soles:";cin>>ms;
	cout<<"Ingresar tipo de cambio:";cin>>tc;
	//proceso
	md=ms/tc;
	//salida
	cout<<"El monto en dolares es:"<<md<<endl;
	//realiza una pausa en el programa
	system("pause");
}
