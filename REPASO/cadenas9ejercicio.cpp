#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char frase[30];
	int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;
	
	cout << "Digite una frase: "; cin.getline(frase,30,'\n');
	
	strlwr(frase);
	
	for (int i = 0; i < strlen(frase); i++) {
		switch (frase[i]) {
			case 'a': vocal_a++; break;
			case 'e': vocal_e++; break;
			case 'i': vocal_i++; break;
			case 'o': vocal_o++; break;
			case 'u': vocal_u++; break;
			default: break;
		} 
	}
	
	cout << "Cantidad de 'a': " << vocal_a << endl;
	cout << "Cantidad de 'e': " << vocal_e << endl;
	cout << "Cantidad de 'i': " << vocal_i << endl;
	cout << "Cantidad de 'o': " << vocal_o << endl;
	cout << "Cantidad de 'u': " << vocal_u << endl;
	
	system("pause");
	return 0;
}
