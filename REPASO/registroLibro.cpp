#include <iostream>

using namespace std;

struct Libro{
	char nombre[50];
	int cantidad;
	char autor[50];
	int paginas;
	char disponibilidad;
}libro1;

void RegistroLibro(){
	cout<<"--------------------------------------------"<<endl;
	cout<<"Nombre: ";
	cin.getline(libro1.nombre,50,'\n');
	cout<<"Autor: ";
	cin.getline(libro1.autor,50,'\n');
	cout<<"Cantidad de ejemplares: ";
	cin>>libro1.cantidad;
	cout<<"Paginas del libro: ";
	cin>>libro1.paginas;
	cout<<"Esta disponible? [S/N]: ";
	cin>>libro1.disponibilidad;
	cout<<"--------------------------------------------"<<endl;
}

void MostrarConformidad(){
	cout<<"--------------------------------------------"<<endl;
	cout<<"Informacion de confirmacion."<<endl;
	cout<<"Nombre del libro: "<<libro1.nombre<<endl;
	cout<<"Autor del libro: "<<libro1.autor<<endl;
	cout<<"Paginas del libro: "<<libro1.paginas<<endl;
	cout<<"Cantidad de ejemplares: "<<libro1.cantidad<<endl;
	cout<<"Disponibilidad: "<<libro1.disponibilidad<<endl;
	cout<<"Todo conforme? [S/N]\n";
}

int main(){
	
	char respuesta;
	
	cout<<"A continuacion registre el libro.\n";
	RegistroLibro();
	MostrarConformidad();
	
	cin>>respuesta;
	cin.ignore();
	
	while(respuesta!='S'){
		cout<<"Por favor registre nuevamente el libro.\n";
		RegistroLibro();
		MostrarConformidad();
		cin>>respuesta;
	}
	
	cout<<"--------------------------------------------"<<endl;
	cout<<"Muchas gracias y tenga un buen dia!";
	
	return 0;
}

