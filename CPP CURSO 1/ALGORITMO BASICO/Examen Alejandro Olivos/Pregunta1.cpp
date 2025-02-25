//libreria de e/s de datos
#include <iostream>
#include <string>
using namespace std;
main(){
	//declarar variables
	int ing,alq,com,mov,ves,salactual;
	double tdc,saldolares;
	string nombre;
	//entrada
	cout<<"Ingresar el nombre de la persona: ";cin>>nombre;
	cout<<"Ingresar los ingresos de "<<nombre<<": ";cin>>ing;
	cout<<"Ingresar el gasto en alquiler de "<<nombre<<": ";cin>>alq;
	cout<<"Ingresar el gasto en comida de "<<nombre<<": ";cin>>com;
	cout<<"Ingresar el gasto en movilidad de "<<nombre<<": ";cin>>mov;
	cout<<"Ingresar el gasto en vestimenta de "<<nombre<<": ";cin>>ves;
	cout<<"Ingresar el tipo de cambio: ";cin>>tdc;
	//Proceso
	salactual=ing-(alq+mov+com+ves);
	saldolares=salactual/tdc;
	//salida
	cout<<"El saldo actual de "<<nombre<<" es: "<<salactual<<endl;
	cout<<"El saldo actual de "<<nombre<<" en dólares es: "<<saldolares<<endl;
	
	system("pause");
}

