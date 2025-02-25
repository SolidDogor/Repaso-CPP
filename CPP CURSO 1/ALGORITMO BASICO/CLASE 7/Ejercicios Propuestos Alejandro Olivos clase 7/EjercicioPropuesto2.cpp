//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int cant,cd,d;
	//entrada
	cout<<"Ingresar cantidad:";cin>>cant;
	//Proceso
	cd=0;
	d=0;
	while(cant>0){
		d=cant%10;
		cd=cd+1;
		cant=cant/10;
	}
	//salida
	cout<<"La cantidad de digitos es:"<<cd<<endl;
	system("pause");
}

