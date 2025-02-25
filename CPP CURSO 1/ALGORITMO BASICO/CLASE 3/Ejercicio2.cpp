//libreria de entrada/salida de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int num,sn;
	//entrada de datos
	cout<<"Ingresar su número:";cin>>num;
	//proceso
	sn=(num*(num+1))/2;
	//salida
	cout<<"La suma de los primeros "<<num<<" números es:"<<sn<<endl;
	//realiza una pausa en el programa
	system("pause");
}	
