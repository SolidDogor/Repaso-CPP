//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int num1,num2,coc,res;
	//entrada de datos
	cout<<"Ingresar primer numero:";cin>>num1;
	cout<<"Ingresar segundo numero:";cin>>num2;
	//proceso
	coc=num1/num2;
	res=num1%num2;
	//salida
	cout<<"El cociente de ambos numeros es:"<<coc<<endl;
	cout<<"El residuo de ambos numeros es:"<<res<<endl;
	system("pause");
}
