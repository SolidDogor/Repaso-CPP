//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int i,n,sp,ci,r;
	//entrada
	cout<<"Ingresar n n�meros:";cin>>n;
	//Proceso
	i=0;
	sp=0;
	ci=0;
	for(i=1;i<=n;i++){
		cout<<"N�mero "<<i<<endl;
		r=i%2;
		if(r==0){
			sp+=i;//acumulador
		}else{
			ci++;//contador
		}
	}
	//salida
	cout<<"La suma de los "<<n<<" n�meros pares es:"<<sp<<endl;
	cout<<"La cantidad de los "<<n<<" n�meros impares es:"<<ci<<endl;
	system("pause");
}

