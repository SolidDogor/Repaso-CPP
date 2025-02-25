//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int num,dig1,dig2,suma;
	//entrada de datos
	cout<<"Ingresar su número:";cin>>num;
	//proceso
	dig1=num/10;
	dig2=num%10;
	suma=dig1+dig2;
	//salida
	cout<<"La suma de ambas cifras es:"<<suma<<endl;
	system("pause");
}
