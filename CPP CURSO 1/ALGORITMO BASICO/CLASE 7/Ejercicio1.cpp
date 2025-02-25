//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int n,f,i;
	//entrada
	cout<<"Ingresar el número:";cin>>n;
	//Proceso
	f=1;
	i=0;
	while(i<n){
		i++; //contador i=i+1
		f*=i //acumulador f=f*i
	}
	//salida
	cout<<"El factorial de "<<n<<"  es:"<<f<<endl;
	system("pause");
}

