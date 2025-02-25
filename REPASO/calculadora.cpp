#include <iostream>

using namespace std;

int main(){
	
	//Declarando las variables usadas para calcular el resultado
	int a, b;
	int opcion = 0;
	//Pidiendo al usuario el primer n�mero
	cout<<"Digite su primer numero: ";
	cin>>a;
	//Pidiendo al usuario el segundo n�mero
	cout<<"Digite su segundo numero: ";
	cin>>b;
	//Mostrando las opciones disponibles
	cout<<"Opciones disponibles\n";
	cout<<"\t1.- Sumar\n";
	cout<<"\t2.- Restar\n";
	cout<<"\t3.- Multiplicar\n";
	cout<<"\t4.- Dividir\n";
	//Pidiendo al usuario una opci�n
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	//Condicional que evalua que hacer en base a la opci�n ingresada
	switch(opcion){
		
		case 1:
			//Sumando ambos n�meros
			cout<<"Resultado: "<<a+b;
			break;
		
		case 2:
			//Restando ambos n�meros
			cout<<"Resultado: "<<a-b;
			break;
			
		case 3:
			//Multiplicando ambos n�meros
			cout<<"Resultado: "<<a*b;
			break;
		
		case 4:
			//Evaluando si el divisor es 0
			if(b==0){
				//Si se cumple la condici�n no se divide
				cout<<"No se puede dividir entre 0.";
			} else {
				//Si es diferente de 0 si se divide
				cout<<"Resultado: "<<a/b;
			}
			break;
			
		default:
			//En caso el usuario seleccione otra opci�n
			cout<<"OPCION DESCONOCIDA";
			break;
	}
	
	return 0;
}

