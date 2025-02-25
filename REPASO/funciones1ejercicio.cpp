#include <iostream>

using namespace std;

void pedirDatos();
void mult(float x, float y);

float num1,num2;

int main(){
	
	pedirDatos();
	mult(num1,num2);
	
	system("pause");
	return 0; 
}

void pedirDatos(){
	cout << "Ingrese el primer numero: "; cin >> num1;
	cout << "Ingrese el segundo numero: "; cin >> num2;
}
void mult(float num1, float num2){
	cout << "La multiplicacion es: " <<  num1 * num2 << endl;
}
