//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	char sol, cas, viu, div, m, f, si, no;
	int cs,b200,b100,res;
	//entrada de datos
	cout<<"Ingresar monto en soles:";cin>>cs;
	//proceso
	b200=cs/200;
	res=cs%200;
	b100=res/100;
	//salida
	cout<<"La cantidad de soles en billetes de 200 es:"<<b200<<endl;
	cout<<"La cantidad de soles en billetes de 100 es:"<<b100<<endl;
	system("pause");
}
