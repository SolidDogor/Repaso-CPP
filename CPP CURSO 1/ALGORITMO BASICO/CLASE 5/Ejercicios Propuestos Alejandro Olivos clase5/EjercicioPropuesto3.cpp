//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int opc;	
	string num;
	//entrada
	cout<<"Ingresar su número del [1-6]:";cin>>opc;
	//proceso
	switch(opc){
		case 1:num="One";break;
		case 2:num="Two";break;
		case 3:num="Three";break;
		case 4:num="Four";break;
		case 5:num="Five";break;
		case 6:num="Six";break;
		default:num="No disponible";break;
			}
	//salida
	cout<<"El número escrito en inglés es: "<<num<<"."<<endl;

system ("pause");

}
