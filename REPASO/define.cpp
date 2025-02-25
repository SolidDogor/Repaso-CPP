#include "header.h"
#include <math.h>

#define multiplicacion(a,b) a*b

#define elevado(a,b) pow(a,b)
 

int main(){
	
	int a, b;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	int Multiplicacion = multiplicacion(a,b);
	int Elevado = elevado(a,b);
	cout<<"Multiplicacion: "<<Multiplicacion<<"\n";
	cout<<"Potencia: "<<Elevado;
	
	return 0;
}
