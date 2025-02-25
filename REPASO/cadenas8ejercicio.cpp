#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	
	char num1[50], num2[50];
	int numero1;
	float numero2;
	
	cout << "Digite un numero entero: "; cin.getline(num1,50,'\n');
	cout << "Digite un numero real: "; cin.getline(num2,50,'\n');
	
	numero1 = atoi(num1);
	numero2 = atof(num2);
	
	cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 << endl;
	
	system("pause");
	return 0;
}
