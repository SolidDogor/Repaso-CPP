#include <iostream>

using namespace std;

void menu();
void agregarCancion();	//USAR ARBOLES
void eliminarCancion();	//USAR ARBOLES
void randomize();		//USAR ARBOLES
void mostrarLista();	//USAR ARBOLES

int main(){
	int opcion = 0;
	do{
		menu();
		cin >> opcion;
		switch (opcion) {
			case 1:
				cout << "Cancion agregada con exito!";
				system("pause");
				break;
			case 2:
				cout << "Cancion eliminada con exito!";
				system("pause");
				break;
			case 3:
				cout << "Lista randomizada con exito!";
				system("pause");
				break;
			case 4:
				cout << "Lista mostrada con exito!";
				system("pause");
				break;
			case 5:
				cout << "Saliendo del programa...";
				system("pause");
				break;
			default:
				cout << "Opcion no disponible...";
				system("pause");
				break;
		}
		system("cls");
		
	}while (opcion != 5);
	
	system("pause");
	return 0;
}

void menu(){
	cout << "MENU DE OPCIONES PARA APRENDER CANCIONES" << endl;
	cout << "1.- Agregar cancion";
	cout << "\n2.- Eliminar cancion";
	cout << "\n3.- RANDOMIZE!";
	cout << "\n4.- Mostrar lista";
	cout << "\n5.- Salir del programa";
	cout << "Digite su opcion: ";
}
