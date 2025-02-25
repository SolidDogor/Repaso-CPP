//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int num;
	string mensaje;
	//entrada
	cout<<"Ingresar un numero:";cin>>num;
	//proceso
	if(num<=-1){
		mensaje="negativo";
	}else{
		mensaje="positivo";
	}
	//salida
	cout<<"El numero es "<<mensaje<<endl;
	system("pause");
}
