//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n,num;
	//entrada
	cout<<"Ingresar número [1-12]:";cin>>n;
	//Proceso
	i=0;
	for(i=1;i<13;i++){
		num=n*i;
		//salida
		cout<<n<<"*"<<i<<"="<<num<<endl;
	}
	system("pause");
}
