//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int num1,num2,sum,res,mul,div;
	//entrada de datos
	cout<<"Ingresar primer numero:";cin>>num1;
	cout<<"Ingresar segundo numero:";cin>>num2;
	//proceso
	sum=num1+num2;
	res=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	//salida
	cout<<"La suma de ambos numeros es:"<<sum<<endl;
	cout<<"La resta de ambos numeros es:"<<res<<endl;
	cout<<"La multiplicacion de ambos numeros es:"<<mul<<endl;
	cout<<"La division de ambos numeros es:"<<div<<endl;
	system("pause");
}
