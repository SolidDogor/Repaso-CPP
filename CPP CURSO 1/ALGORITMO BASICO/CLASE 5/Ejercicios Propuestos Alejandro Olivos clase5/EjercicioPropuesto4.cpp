//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int opc;	
	string periodo;
	//entrada
	cout<<"Ingresar su número [1,2,3,4,6,12]:";cin>>opc;
	//proceso
	switch(opc){
		case 1:periodo="Mensual";break;
		case 2:periodo="Bimestral";break;
		case 3:periodo="Trimestral";break;
		case 4:periodo="Cuatrimestral";break;
		case 6:periodo="Semestral";break;
		case 12:periodo="Anual";break;
		default:periodo="No disponible";break;
			}
	//salida
	cout<<"El periodo del año es: "<<periodo<<"."<<endl;

system ("pause");

}
