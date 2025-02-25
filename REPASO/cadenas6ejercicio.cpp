#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad1[100], cad2[100];
	
	cout << "Ingrese su palabra o frase: "; cin.getline(cad1,100,'\n');
	cout << "Ingrese su palabra o frase: "; cin.getline(cad2,100,'\n');
	strupr(cad1);
	strupr(cad2);
	
	if(strcmp(cad1,cad2)==0){
		cout << cad1 << " = " << cad2 << endl;
		cout << "Ambas cadenas son iguales" << endl;
	} else {
		cout << cad1 << " != " << cad2 << endl;
		cout << "Las cadenas son diferentes" << endl;
	}
	
	system("pause");
	return 0;
}
