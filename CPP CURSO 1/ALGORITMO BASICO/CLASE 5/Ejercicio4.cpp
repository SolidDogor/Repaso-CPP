//libreria de e/s de datos
#include <iostream>
using namespace std;
#include <string.h>
main(){
	//declarar variables
	int opc;	
	string estacion;
	//entrada
	cout<<"Ingresar su numero del [1-12]:";cin>>opc;
	//proceso
	switch(opc){
		case 1:
		case 2:
		case 3:
				estacion="Verano";break;
		case 4:
		case 5:
		case 6:
				estacion="Otoño";break;
		case 7:
		case 8:
		case 9:
				estacion="Invierno";break;
		case 10:
		case 11:
		case 12:
				estacion="Primavera";break;
		default:estacion="inexistente";break;
			}
	//salida
	cout<<"La estación del año es: "<<estacion<<"."<<endl;

system ("pause");

}
