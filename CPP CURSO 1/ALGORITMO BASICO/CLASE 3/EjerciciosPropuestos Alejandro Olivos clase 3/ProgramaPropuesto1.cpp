//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int b,h,a;
	//entrada de datos
	cout<<"Ingresar base del triangulo:";cin>>b;
	cout<<"Ingresar altura del triangulo:";cin>>h;
	//proceso
	a=(b*h)/2;
	//salida
	cout<<"El area del triangulo es:"<<a<<endl;
	system("pause");
}
