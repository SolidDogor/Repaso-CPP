//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n,num;
	double sn,promedio;
	//entrada
	cout<<"Ingresar la cantidad de n�meros:";cin>>n;
	//Proceso
	i=0;
	sn=0;
	while(i<n){
		i++; //contador i=i+1
		cout<<"Ingresar n�mero "<<i<<":";cin>>num;
		sn+=num; //acumulador
	}
	promedio=sn/n;
	//salida
	cout<<"La suma de los "<<n<<"  n�meros es:"<<sn<<endl;
	cout<<"El promedio de los "<<n<<"  n�meros es:"<<promedio<<endl;
	system("pause");
}

