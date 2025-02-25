#include <iostream>

using namespace std;

//Prototipo de funcion
void intercambio(float *, float *);

int main(){
	float num1 = 10.1, num2 = 1.01;
	
	cout << "Primer numero: " << num1 << endl;
	cout << "Segundo numero: " << num2 << endl;
	
	intercambio(&num1,&num2);	//Llamada a la función intercambio
	
	cout << "\nDespues del intercambio" << endl;
	cout << "Primer numero: " << num1 << endl;
	cout << "Segundo numero: " << num2 << endl;
	
	system("pause");
	return 0;
}

void intercambio(float *dir_num1, float *dir_num2){
	float aux;
	
	aux = *dir_num1;
	*dir_num1 = *dir_num2;
	*dir_num2 = aux;
}
