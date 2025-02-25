#include <iostream>
#include <string.h>

using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char genero[10];
	char club[20];
	char categoria[30];
}corredor1;

int main(){
	
	cout << "Ingrese su nombre: ";
	cin.getline(corredor1.nombre,20,'\n');
	cout << "Ingrese su edad: ";
	cin >> corredor1.edad;
	fflush(stdin);
	cout << "Ingrese su genero [M-F]: ";
	cin.getline(corredor1.genero,10,'\n');
	cout << "Ingrese su club: ";
	cin.getline(corredor1.club,20,'\n');
	
	if(corredor1.edad <= 18){
		strcpy(corredor1.categoria,"Juvenil");
	} else if (corredor1.edad <= 40){
		strcpy(corredor1.categoria,"Senior");
	} else {
		strcpy(corredor1.categoria,"Veterano");
	}
	
	cout << "\nImprimiendo datos" << endl;
	cout << "Nombre: " << corredor1.nombre << endl;
	cout << "Edad: " << corredor1.edad << endl;
	cout << "Genero: " << corredor1.genero << endl;
	cout << "Club: " << corredor1.club << endl;
	cout << "Categoria: " << corredor1.categoria << endl;
	
	system("pause");
	return 0;
}
