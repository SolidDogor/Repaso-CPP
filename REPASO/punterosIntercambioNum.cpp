#include <iostream>

using namespace std;

void intercambio(float *,float *);	//Prototipo

int main(){
	float num1 = 20.8, num2 = 6.78;
	
	cout << "Primer numero: " << num1 << endl;
	cout << "Segundo numero: " << num2 << endl;
	
	intercambio(&num1,&num2);
	
	cout << "\nDespues del intercambio:" << endl;
	cout << "Nuevo valor del primer numero: " << num1 << endl;
	cout << "Nuevo valor del segundo numero: " << num2 << endl;
	
	system("pause");
	return 0;
}

void intercambio(float *dirNm1, float *dirNm2){
	float aux;
	//Intercambiar valores de las variables
	aux = *dirNm1;
	*dirNm1 = *dirNm2;
	*dirNm2 = aux;
}
