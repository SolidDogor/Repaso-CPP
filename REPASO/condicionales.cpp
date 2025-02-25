#include <iostream>

using namespace std;

int main(){
	
	int a, b, diferencia;
	bool respuesta;
	cout<<"Por favor ingrese numeros positivos.\n";
	cout<<"Ingrese su primer numero: ";
	cin>>a;
	cout<<"Ingrese su segundo numero: ";
	cin>>b;
	if(a<0||b<0){
		cout<<"Debe ingresar un numero positivo.";
	}else{
		if(a>b){
			diferencia = a-b;
			cout<<"El primer numero es mayor al segundo numero por ";
			cout<<diferencia<<" numeros";
		} else if (a<b){
			diferencia = b-a;
			cout<<"El segundo numero es mayor al segundo numero por ";
			cout<<diferencia<<" numeros";
		} else {
			cout<<"Ambos numeros son iguales.";
		}
	}
	
	return 0;
}
