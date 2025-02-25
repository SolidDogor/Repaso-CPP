//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n,edad,tedad,camay,camen;
	double pedad;
	//entrada
	cout<<"Ingresar la cantidad n de personas:";cin>>n;
	//Proceso
	tedad=0;
	i=0;
	for(i=1;i<=n;i++){
		cout<<"Ingresar la edad de la persona "<<i<<":";cin>>edad;
		if(edad>=18){
			camay++;
		}else{
			camen++;
		}
		tedad=tedad+edad;
	}
	pedad=tedad/n;
	//salida
	cout<<"El promedio de edad es: "<<pedad<<endl;
	cout<<"La cantidad de menores es: "<<camen<<endl;
	cout<<"La cantidad de mayores es: "<<camay<<endl;
	system("pause");
}
