#include "header.h"

//Aquí se declaran las estructuras
struct pokemon{
	//Variables de mi estructura
	char nombre[50];
	char tipo[50];
	float peso;
	char genero;
}pokemon1;

int main(){
	
	cout<<"Ingrese el nombre de su pokemon\n";
	cin.getline(pokemon1.nombre,50,'\n');
	cout<<"Ingrese el tipo de su pokemon\n";
	cin.getline(pokemon1.tipo,50,'\n');
	cout<<"Ingrese el peso de su pokemon (kg.)\n";
	cin>>pokemon1.peso;
	cout<<"Ingrese el genero de su pokemon (M o F)\n";
	cin>>pokemon1.genero;
	
	cout<<"Nombre del pokemon: "<<pokemon1.nombre<<endl;
	cout<<"Tipo del pokemon: "<<pokemon1.tipo<<endl;
	cout<<"Peso del pokemon: "<<pokemon1.peso<<endl;
	cout<<"Genero del pokemon: "<<pokemon1.genero<<endl;
	
	return 0;
}
