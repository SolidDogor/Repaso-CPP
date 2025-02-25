//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n,num,may;
	//entrada
	cout<<"Ingresar los n números:";cin>>n;
	//Proceso
	may=0;
	i=0;
	for(i=1;i<=n;i++){
		cout<<"Ingresar número "<<i<<":";cin>>num;
		if(num>may){
			may=num;
		}
	}
	//salida
	cout<<"El número mayor es:"<<may<<endl;
	system("pause");
}
