//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n,num;
	double sn,promedio;
	//entrada
	cout<<"Ingresar la cantidad de números:";cin>>n;
	//Proceso
	i=0;
	sn=0;
	while(i<n){
		i++; //contador i=i+1
		cout<<"Ingresar número "<<i<<":";cin>>num;
		sn+=num; //acumulador
	}
	promedio=sn/n;
	//salida
	cout<<"La suma de los "<<n<<"  números es:"<<sn<<endl;
	cout<<"El promedio de los "<<n<<"  números es:"<<promedio<<endl;
	system("pause");
}

