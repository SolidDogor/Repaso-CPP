//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int opc;	
	string dia;
	//entrada
	cout<<"Ingresar su numero del [1-7]:";cin>>opc;
	//proceso
	switch(opc){
		case 1:
			dia="Lunes";break;
		case 2:
			dia="Martes";break;
		case 3:
			dia="Miercoles";break;
		case 4:
			dia="Jueves";break;
		case 5:
			dia="Viernes";break;
		case 6:
			dia="Sabado";break;
		case 7:
			dia="Domingo";break;
		default:
			dia="inexistente";break;
			}
	//salida
	cout<<"El dia de la semana es: "<<dia<<"."<<endl;

system ("pause");

}
