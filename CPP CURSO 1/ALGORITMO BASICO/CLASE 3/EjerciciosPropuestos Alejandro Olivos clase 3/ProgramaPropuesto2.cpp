//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int ing,gm,am,aa;
	//entrada de datos
	cout<<"Ingresar ingreso de dinero:";cin>>ing;
	cout<<"Ingresar gasto mensual:";cin>>gm;
	//proceso
	am=ing-gm;
	aa=am*12;
	//salida
	cout<<"El ahorro mensual es:"<<am<<endl;
	cout<<"El ahorro anual es:"<<aa<<endl;
	system("pause");
}
