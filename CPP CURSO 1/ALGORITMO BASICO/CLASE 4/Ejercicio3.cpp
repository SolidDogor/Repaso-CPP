//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int v1,v2,v3,tv,pv,vma,vme;
	string nombre;
	//entrada
	cout<<"Ingresar nombre del vendedor:";cin>>nombre;
	cout<<"Ingresar primera venta:";cin>>v1;
	cout<<"Ingresar segunda venta:";cin>>v2;
	cout<<"Ingresar tercera venta:";cin>>v3;
	//proceso
	tv=v1+v2+v3;
	pv=(v1+v2+v3)/3;
	vma=0;
	if (v1>vma){
		vma=v1;
	};
	if (v2>vma){
		vma=v2;
	};	
	if (v3>vma){
		vma=v3;
	};
	vme=99999;
	if (v1<vme){
		vme=v1;
	};
	if (v2<vme){
		vme=v2;
	};		
	if (v3<vme){
		vme=v3;
	};
	//salida
	cout<<"El total de ventas es de:"<<tv<<endl;
	cout<<"El promedio de ventas es de:"<<pv<<endl;
	cout<<"La mayor venta es:"<<vma<<endl;
	cout<<"La menor venta es:"<<vme<<endl;
	system("pause");
}
