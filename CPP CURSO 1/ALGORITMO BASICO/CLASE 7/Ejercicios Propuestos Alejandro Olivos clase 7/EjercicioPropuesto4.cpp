//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int cant,d,r,cpar,cimp;
	//entrada
	cout<<"Ingresar cantidad:";cin>>cant;
	//proceso
	d=0;
	cpar=0;
	cimp=0;
	while(cant>0){
		d=cant%10;
		r=d%2;
		if(r==0){
		cpar++;
		}else{
		cimp++;
		}
		cant=cant/10;
	}
	//salida
	cout<<"La cantidad de digitos pares es:"<<cpar<<endl;
	cout<<"La cantidad de digitos impares es:"<<cimp<<endl;
	//salida
	system("pause");
}
