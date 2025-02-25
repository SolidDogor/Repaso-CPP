//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int cant,d,r,cpar,simp;
	//entrada
	cout<<"Ingresar cantidad:";cin>>cant;
	//proceso
	d=0;
	cpar=0;
	simp=0;
	while(cant>0){
		d=cant%10;
		r=d%2;
		if(r==0){
		cpar++;
		}
		if(r!=0){
		simp=simp+d;
		}
		cant=cant/10;
	}
	//salida
	cout<<"La cantidad de digitos pares es:"<<cpar<<endl;
	cout<<"La suma de digitos impares es:"<<simp<<endl;
	//salida
	system("pause");
}
