//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n,fact;
	//entrada
	cout<<"Ingresar el n�mero n";cin>>n;
	//Proceso
	fact=1;
	i=0;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	//salida
	cout<<"El factorial del n�mero "<<n<<" es: "<<fact<<endl;
	system("pause");
}
