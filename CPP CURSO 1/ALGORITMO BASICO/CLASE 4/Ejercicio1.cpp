//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int num,r;
	string mensaje;
	//entrada
	cout<<"Ingresar un numero:";cin>>num;
	//proceso
	r=num%2;
	if(r==0){
		mensaje="Es par";
	}else{
		mensaje="Es Impar";
	}
	//salida
	cout<<"El numero:"<<mensaje<<endl;
	system("pause");
}
