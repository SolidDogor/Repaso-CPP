//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n,edad,emayor,emenor;
	double totale,pedad;
	//entrada
	cout<<"Ingresar la cantidad de alumnos:";cin>>n;
	//Proceso
	i=0;
	emayor=0;
	emenor=99999;
	totale=0;
	while(i<n){
		i++;
		cout<<"Ingresar edad del alumno número "<<i<<":";cin>>edad;
		totale+=edad;
		if(edad>emayor){
			emayor=edad;
		}
		if(edad<emenor){
			emenor=edad;
		}
	}
	pedad=totale/n;
	//salida
	cout<<"El mayor alumno tiene:"<<emayor<<" años."<<endl;
	cout<<"El menor alumno tiene:"<<emenor<<" años."<<endl;
	cout<<"El promedio de edad de los "<<n<<"  alumnos es:"<<pedad<<endl;
	system("pause");
}

