//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int opc;	
	string num;
	//entrada
	cout<<"Ingresar su n�mero del [1-5]:";cin>>opc;
	//proceso
	switch(opc){
		case 1:num="Uno";break;
		case 2:num="Dos";break;
		case 3:num="Tres";break;
		case 4:num="Cuatro";break;
		case 5:num="Cinco";break;
		default:num="No disponible";break;
			}
	//salida
	cout<<"El n�mero en palabras es: "<<num<<"."<<endl;

system ("pause");

}
