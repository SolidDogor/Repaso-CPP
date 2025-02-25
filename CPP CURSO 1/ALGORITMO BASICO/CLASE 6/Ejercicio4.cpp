//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,ne;
	double sueldo,sp,ts;
	//entrada
	cout<<"Ingresar cantidad de empleados:";cin>>ne;
	//Proceso
	ts=0.0;
	for(i=1;i<=ne;i++){
		cout<<"Ingresar sueldo de empleado número "<<i<<":";cin>>sueldo;
		ts+=sueldo; //acumulador
	}
	sp=ts/ne;
	//salida
	cout<<"El promedio de sueldos de los "<<ne<<" empleados es:"<<sp<<endl;
	system("pause");
}

