#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[20], palabra2[20];
	
	cout << "Digite su palabra: "; gets(palabra);
	
	strcpy(palabra2, palabra);
	
	cout << "Palabra: " << palabra2 << endl;
	system("pause");
	return 0;
}
