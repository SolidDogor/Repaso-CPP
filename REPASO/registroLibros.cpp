#include <iostream>
#include <vector>

using namespace std;

struct Libro {
    char nombre[50];
    int cantidad;
    char autor[50];
    int paginas;
    char disponibilidad;
};

void RegistroLibro(Libro &libro) {
    cout << "--------------------------------------------" << endl;
    cout << "Nombre: ";
    cin.ignore(); // Limpia el buffer de entrada
    cin.getline(libro.nombre, 50, '\n');
    cout << "Autor: ";
    cin.getline(libro.autor, 50, '\n');
    cout << "Cantidad de ejemplares: ";
    cin >> libro.cantidad;
    cin.ignore(); // Limpia el buffer de entrada
    cout << "Paginas del libro: ";
    cin >> libro.paginas;
    cin.ignore(); // Limpia el buffer de entrada
    cout << "Esta disponible? [S/N]: ";
    cin >> libro.disponibilidad;
    cin.ignore(); // Limpia el buffer de entrada
    cout << "--------------------------------------------" << endl;
}

void MostrarConformidad(const Libro &libro) {
    cout << "Nombre del libro: " << libro.nombre << endl;
    cout << "Autor del libro: " << libro.autor << endl;
    cout << "Paginas del libro: " << libro.paginas << endl;
    cout << "Cantidad de ejemplares: " << libro.cantidad << endl;
    cout << "Disponibilidad: " << libro.disponibilidad << endl;
    cout << "Todo conforme? [S/N]\n";
}

int main() {
    vector<Libro> libros;
    char respuesta;

    do {
        Libro nuevoLibro;
        cout << "A continuacion registre el libro.\n";
        RegistroLibro(nuevoLibro);
        cout << "--------------------------------------------" << endl;
    	cout << "Informacion de confirmacion." << endl;
        MostrarConformidad(nuevoLibro);

        cin >> respuesta;
        cin.ignore(); // Limpia el buffer de entrada

        if (respuesta == 'S') {
            libros.push_back(nuevoLibro);
        }

        cout << "Desea registrar otro libro? [S/N]\n";
        cin >> respuesta;
        cin.ignore(); // Limpia el buffer de entrada
    } while (respuesta == 'S');

    cout << "--------------------------------------------" << endl;
    cout << "Registro finalizado. A continuación, los libros registrados:" << endl;
    for (size_t i = 0; i < libros.size(); ++i) {
    	MostrarConformidad(libros[i]);
	}

    cout << "Muchas gracias y tenga un buen dia!" << endl;

    return 0;
}

