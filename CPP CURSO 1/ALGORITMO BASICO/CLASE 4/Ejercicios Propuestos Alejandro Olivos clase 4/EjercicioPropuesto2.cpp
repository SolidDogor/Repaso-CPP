//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int c1,c2,c3,c4,tc,pc,cma,cme;
	string nombre;
	//entrada
	cout<<"Ingresar nombre del cliente:";cin>>nombre;
	cout<<"Ingresar primera compra:";cin>>c1;
	cout<<"Ingresar segunda compra:";cin>>c2;
	cout<<"Ingresar tercera compra:";cin>>c3;
	cout<<"Ingresar cuarta compra:";cin>>c4;
	//proceso
	tc=c1+c2+c3+c4;
	pc=(c1+c2+c3+c4)/4;
	cma=c1;
	if (c2>cma){
		cma=c2;
	};	
	if (c3>cma){
		cma=c3;
	};
	if (c4>cma){
		cma=c4;
	};
	cme=c1;
	if (c2<cme){
		cme=c2;
	};		
	if (c3<cme){
		cme=c3;
	};
	if (c4<cme){
		cme=c4;
	};
	//salida
	cout<<"A continuacion se muestran datos sobre las compras de "<<nombre<<endl;
	cout<<"El total de compras es de:"<<tc<<endl;
	cout<<"El promedio de compras es de:"<<pc<<endl;
	cout<<"La mayor compra es:"<<cma<<endl;
	cout<<"La menor compra es:"<<cme<<endl;
	system("pause");
}
