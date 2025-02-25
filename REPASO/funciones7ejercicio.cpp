#include <iostream>

using namespace std;

void intercambiar(int&,int&);

int main(){
	int n1,n2;
	
	cout << "Ingrese el primer numero: "; cin >> n1;
	cout << "Ingrese el segundo numero: "; cin >> n2;
	
	intercambiar(n1,n2);
	
	cout << "Primer numero (intercambiado): " << n1 << endl;
	cout << "Segundo numero (intercambiado): " << n2 << endl;
	
	system("pause");
	return 0;
}

void intercambiar(int& n1, int& n2){
	int aux;
	aux = n1;
	n1 = n2;
	n2 = aux;
}
