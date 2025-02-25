#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[10];
	int longitud = 0;
	
	cout << "Ingrese su cadena: ";
	gets(palabra);
	longitud = strlen(palabra);
	
	if (longitud < 11){
		cout << palabra << endl;
	} else {
		cout << "La palabra excede 10 caracteres." << endl;
	}
	
	system("pause");
	return 0;
}
