#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cadena1[] = "Hola que tal ";
	char nombre[50], bienvenida[100];
	
	cout << "Ingrese su nombre: ";	
	gets(nombre);
	
	strcpy(bienvenida, cadena1);
	
	strcat(bienvenida, nombre);	
	cout << bienvenida << endl;
	
	system("pause");
	return 0;
}
