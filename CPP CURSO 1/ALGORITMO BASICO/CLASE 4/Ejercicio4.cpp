//libreria de e/s de datos
#include <iostream>
using namespace std;
main(){
	//declarar variables
	int s1,s2,s3,s4,s5,ts,ps,sma,sme;
	string nombre;
	//entrada
	cout<<"Ingresar primer sueldo:";cin>>s1;
	cout<<"Ingresar segundo sueldo:";cin>>s2;
	cout<<"Ingresar tercer sueldo:";cin>>s3;
	cout<<"Ingresar cuarto sueldo:";cin>>s4;
	cout<<"Ingresar quinto sueldo:";cin>>s5;
	//proceso
	ts=s1+s2+s3+s4+s5;
	ps=(s1+s2+s3+s4+s5)/5;
	sma=s1;
	if (s2>sma){
		sma=s2;
	};	
	if (s3>sma){
		sma=s3;
	};
	if (s4>sma){
		sma=s4;
	};
	if (s5>sma){
		sma=s5;
	};
	sme=s1;
	if (s2<sme){
		sme=s2;
	};		
	if (s3<sme){
		sme=s3;
	};
	if (s4<sme){
		sme=s4;
	};
	if (s5<sme){
		sme=s5;
	};
	//salida
	cout<<"El total de sueldos es de:"<<ts<<endl;
	cout<<"El promedio de sueldos es de:"<<ps<<endl;
	cout<<"El mayor sueldo es:"<<sma<<endl;
	cout<<"El menor sueldo es:"<<sme<<endl;
	system("pause");
}
