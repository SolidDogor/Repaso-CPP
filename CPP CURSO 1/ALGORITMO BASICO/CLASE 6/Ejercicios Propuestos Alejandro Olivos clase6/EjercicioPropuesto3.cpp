//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n;
	double ventas,tventas,vmen;
	//entrada
	cout<<"Ingresar la cantidad n de ventas:";cin>>n;
	//Proceso
	vmen=99999.99;
	tventas=0.00;
	i=0;
	for(i=1;i<=n;i++){
		cout<<"Ingresar la venta número "<<i<<":";cin>>ventas;
		if(ventas<vmen){
			vmen=ventas;
		}
		tventas=tventas+ventas;
	}
	//salida
	cout<<"La cantidad total de ventas es de: "<<tventas<<endl;
	cout<<"La menor venta es de: "<<vmen<<endl;
	system("pause");
}
