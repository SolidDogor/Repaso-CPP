#include <iostream>
#include <string.h>

using namespace std;

int main() {
	
	char palabra1[] = " ";
	char palabra2[] = " ";
	
	cout << "Ingrese una palabra: "; gets(palabra1);
	cout << "Ingrese otra palabra: "; gets(palabra2);
	
	if (strcmp(palabra1, palabra2) < 0 ){
		cout << palabra1 << " va antes de " << palabra2 << endl;
	} else if (strcmp(palabra1, palabra2) > 0) {
		cout << palabra2 << " va antes de " << palabra1 << endl;
	} else /*(strcmp(palabra1, palabra2) != 0)*/ {
		cout << "Ambas palabras son iguales" << endl;
	}
	
	
	system("pause");
	return 0;
}
