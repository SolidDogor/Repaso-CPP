//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int p1,p2,p3,pe,pma;
	//entrada
	cout<<"Ingresar edad de la primera persona:";cin>>p1;
	cout<<"Ingresar edad de la segunda persona:";cin>>p2;
	cout<<"Ingresar edad de la tercera persona:";cin>>p3;
	//proceso
	pe=(p1+p2+p3)/3;
	pma=p1;
	if (p2>pma){
		pma=p2;
	};	
	if (p3>pma){
		pma=p3;
	};
	//salida
	cout<<"El promedio de las edades es de:"<<pe<<endl;
	cout<<"La persona mayor tiene: "<<pma<<" años."<<endl;
	system("pause");
}
