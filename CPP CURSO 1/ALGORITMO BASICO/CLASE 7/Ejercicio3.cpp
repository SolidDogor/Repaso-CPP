//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int cant,ci,d;
	//entrada
	cout<<"Ingresar cantidad:";cin>>cant;
	//Proceso
	ci=0;
	while(cant>0){
		d=cant%10; //digito de la cantidad(residuo)
		ci=(ci*10)+d;
		cant=cant/10;
	}
	//salida
	cout<<"La cantidad invertida es:"<<ci<<endl;
	system("pause");
}

