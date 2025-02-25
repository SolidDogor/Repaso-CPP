//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int opc;	
	string num;
	//entrada
	cout<<"Ingresar su numero del [1-10]:";cin>>opc;
	//proceso
	switch(opc){
		case 1:num="I";break;
		case 2:num="II";break;
		case 3:num="III";break;
		case 4:num="IV";break;
		case 5:num="V";break;
		case 6:num="VI";break;
		case 7:num="VII";break;
		case 8:num="VIII";break;
		case 9:num="IX";break;
		case 10:num="X";break;
		default:num="No disponible";break;
			}
	//salida
	cout<<"El número escrito en romano es: "<<num<<"."<<endl;

system ("pause");

}
