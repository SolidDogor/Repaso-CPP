#include <iostream>

using namespace std;

int potencia(int,int);

int main(){
	
	int b, e;
	
	cout << "Digite la base: "; cin >> b;
	cout << "Digite el exponente: "; cin >> e;
	
	cout << b << "^" << e << " = " << potencia(b,e) << endl;
	
	system("pause");
	return 0;
}

int potencia(int x, int y){
	if(y == 1){
		return x;
	} else {
		return x * potencia(x,(y-1));
	}
}
