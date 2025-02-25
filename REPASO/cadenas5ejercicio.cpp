#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad[100], dac[100];
	
	cout << "Ingrese su palabra o frase: "; cin.getline(dac,100,'\n');
	strcpy(cad, dac);
	strrev(dac);
	
	if(strcmp(cad,dac)==0){
		cout << "La palabra o frase es polindroma." << endl;
	} else {
		cout << "No se encontro un palindromo." << endl;
	}
	
	system("pause");
	return 0;
}
