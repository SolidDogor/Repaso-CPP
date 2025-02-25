#include <iostream>
#include <math.h>

using namespace std;

void pedirDatos();
void funpot(int x, int y);

int b, e;

int main(){
	
	pedirDatos();
	funpot(b,e);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout << "Ingrese la base: "; cin >> b;
	cout << "Ingrese el exponente: "; cin >> e;
}

void funpot(int x, int y){
	cout << pow(x,y) << endl;
}
