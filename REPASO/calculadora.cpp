#include <iostream>

using namespace std;

int main(){
	
	//Declarando las variables usadas para calcular el resultado
	int a, b;
	int opcion = 0;
	//Pidiendo al usuario el primer número
	cout<<"Digite su primer numero: ";
	cin>>a;
	//Pidiendo al usuario el segundo número
	cout<<"Digite su segundo numero: ";
	cin>>b;
	//Mostrando las opciones disponibles
	cout<<"Opciones disponibles\n";
	cout<<"\t1.- Sumar\n";
	cout<<"\t2.- Restar\n";
	cout<<"\t3.- Multiplicar\n";
	cout<<"\t4.- Dividir\n";
	//Pidiendo al usuario una opción
	cout<<"Ingrese una opcion: ";
	cin>>opcion;
	//Condicional que evalua que hacer en base a la opción ingresada
	switch(opcion){
		
		case 1:
			//Sumando ambos números
			cout<<"Resultado: "<<a+b;
			break;
		
		case 2:
			//Restando ambos números
			cout<<"Resultado: "<<a-b;
			break;
			
		case 3:
			//Multiplicando ambos números
			cout<<"Resultado: "<<a*b;
			break;
		
		case 4:
			//Evaluando si el divisor es 0
			if(b==0){
				//Si se cumple la condición no se divide
				cout<<"No se puede dividir entre 0.";
			} else {
				//Si es diferente de 0 si se divide
				cout<<"Resultado: "<<a/b;
			}
			break;
			
		default:
			//En caso el usuario seleccione otra opción
			cout<<"OPCION DESCONOCIDA";
			break;
	}
	
	return 0;
}

