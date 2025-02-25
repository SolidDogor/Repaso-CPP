//libreria de e/s de datos
#include <iostream>
using namespace std;
#include <string.h>
main(){
	//declarar variables
	int n1,n2,n3,p;
	string condicion,nombre;
	//entrada
	cout<<"Ingresar nombre del alumno:";cin>>nombre;
	cout<<"Ingresar primera nota del alumno:";cin>>n1;
	cout<<"Ingresar segunda nota del alumno:";cin>>n2;
	cout<<"Ingresar tercera nota del alumno:";cin>>n3;
	//proceso
	p=(n1+n2+n3)/3;
	if(p>=14){
		condicion="aprobo";
	}else{
		condicion="desaprobo";
	}
	//salida
	cout<<"El alumno "<<nombre<<" "<<condicion<<" con un promedio de:"<<p<<endl;
	system("pause");
}
