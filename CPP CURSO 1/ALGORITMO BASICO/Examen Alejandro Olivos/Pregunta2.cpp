//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int opc;	
	string numpal,numing,numrom;
	//entrada
	cout<<"Ingresar su numero del [1-10]:";cin>>opc;
	//proceso
	switch(opc){
		case 1:numpal="Uno";numing="One";numrom="I";break;
		case 2:numpal="Dos";numing="Two";numrom="II";break;
		case 3:numpal="Tres";numing="Three";numrom="III";break;
		case 4:numpal="Cuatro";numing="Four";numrom="IV";break;
		case 5:numpal="Cinco";numing="Five";numrom="V";break;
		case 6:numpal="Seis";numing="Six";numrom="VI";break;
		case 7:numpal="Siete";numing="Seven";numrom="VII";break;
		case 8:numpal="Ocho";numing="Eight";numrom="VIII";break;
		case 9:numpal="Nueve";numing="Nine";numrom="IX";break;
		case 10:numpal="Diez";numing="Ten";numrom="X";break;
		default:numpal="No disponible";numing="No disponible";numrom="No disponible";break;
			}
	//salida
	cout<<"El numero escrito en palabras es: "<<numpal<<"."<<endl;
	cout<<"El numero escrito en ingles es: "<<numing<<"."<<endl;
	cout<<"El número escrito en romano es: "<<numrom<<"."<<endl;

system ("pause");

}
