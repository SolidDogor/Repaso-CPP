//libreria de e/s de datos
#include <iostream>
#include <string.h>
using namespace std;
main(){
	//declarar variables
	int i,n,num,canhom,canmuj;
	string sexo;
	//entrada
	cout<<"Ingresar la cantidad n de personas:";cin>>n;
	//Proceso
	i=0;
	canhom=0;
	canmuj=0;
	for(i=1;i<=n;i++){
		cout<<"Ingresar sexo (h o m) de la persona número "<<i<<":";cin>>sexo;
		if(sexo=="h"){
			canhom++; //contador
		}else{
			canmuj++; //contador
		}
	}
	//salida
	cout<<"La cantidad de los hombres es:"<<canhom<<endl;
	cout<<"La cantidad de las mujeres es:"<<canmuj<<endl;
	system("pause");
}

