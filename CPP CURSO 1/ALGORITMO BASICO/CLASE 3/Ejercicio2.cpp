//libreria de entrada/salida de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int num,sn;
	//entrada de datos
	cout<<"Ingresar su n�mero:";cin>>num;
	//proceso
	sn=(num*(num+1))/2;
	//salida
	cout<<"La suma de los primeros "<<num<<" n�meros es:"<<sn<<endl;
	//realiza una pausa en el programa
	system("pause");
}	
