//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n,edad,cantm;
	double totale,pedad;
	char sexo;
	//entrada
	cout<<"Ingresar la cantidad de personas:";cin>>n;
	//Proceso
	cantm=0;
	i=0;
	totale=0;
	while(i<n){
		i++;
		cout<<"Ingresar sexo de la persona "<<i<<":";cin>>sexo;
		if(sexo=='m'){
			cantm++;
		}
		cout<<"Ingresar edad de la persona "<<i<<":";cin>>edad;
		totale+=edad;
	}
	pedad=totale/n;
	//salida
	cout<<"La cantidad de hombres es:"<<cantm<<endl;
	cout<<"El promedio de edad de las "<<n<<"  personas es:"<<pedad<<endl;
	system("pause");
}

