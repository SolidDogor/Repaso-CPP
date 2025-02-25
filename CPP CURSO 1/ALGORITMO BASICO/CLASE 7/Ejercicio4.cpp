//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int cant,cd,d;
	double sd,pd;
	//entrada
	cout<<"Ingresar cantidad:";cin>>cant;
	//Proceso
	cd=0;
	sd=0;
	d=0;
	while(cant>0){
		d=cant%10; //digito de la cantidad(residuo)
		cd=cd+1;
		sd=sd+d;
		cant=cant/10;
	}
	pd=sd/cd;
	//salida
	cout<<"La cantidad de digitos es:"<<cd<<endl;
	cout<<"La suma de digitos es:"<<sd<<endl;
	cout<<"El promedio de digitos es:"<<pd<<endl;
	system("pause");
}

