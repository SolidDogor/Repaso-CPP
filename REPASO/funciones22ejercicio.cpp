#include <iostream>

using namespace std;

int escribeNumeros(int,int);

int main(){
	
	int ini, fin;
	do{
		cout << "Ingrese el numero de inicio: "; cin >> ini;
		cout << "Ingrese el numero de finalizacion: "; cin >> fin;		
	}while(ini > fin);
	
	escribeNumeros(ini,fin);
	cout << endl;
	
	system("pause");
	return 0;
}

int escribeNumeros(int ini, int fin){
	if(ini <= fin){
		cout << ini << " ";
		return escribeNumeros((ini+1),fin);
	} else if(ini == fin){
		cout << ini << " ";
		return ini;
	}
}
