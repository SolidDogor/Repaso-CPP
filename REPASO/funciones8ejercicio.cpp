#include <iostream>

using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	int v1, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;
	
	cout << "Ingrese el valor: "; cin >> v1;
	
	cambio(v1,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout << "Cantidad de billetes de 100: " << cien << endl;
	cout << "Cantidad de billetes de 50: " << cincuenta << endl;
	cout << "Cantidad de billetes de 20: " << veinte << endl;
	cout << "Cantidad de billetes de 10: " << diez << endl;
	cout << "Cantidad de billetes de 5: " << cinco << endl;
	cout << "Cantidad de billetes de 1: " << uno << endl;
	
	system("pause");
	return 0;	
}

void cambio(int v1, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	
	if(v1 >= 100){
		cien = v1 / 100;
		v1 = v1 % 100;
	}
	if(v1 >= 50){
		cincuenta = v1 / 50;
		v1 = v1 % 50;
	}
	if(v1 >= 20){
		veinte = v1 / 20;
		v1 = v1 % 20;
	}
	if(v1 >= 10){
		diez = v1 / 10;
		v1 = v1 % 10;
	}
	if(v1 >= 5){
		cinco = v1 / 5;
		v1 = v1 % 5;
	}
	if(v1 >= 1){
		uno = v1 / 1;
		v1 = v1 % 1;
	}
}
