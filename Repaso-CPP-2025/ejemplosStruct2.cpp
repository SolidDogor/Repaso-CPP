#include <iostream>
struct Estudiante {
    std::string nombre;
    float nota;
};

int main() {
    int n;
    std::cout << "Cantidad de estudiantes: ";
    std::cin >> n;

    Estudiante* lista = new Estudiante[n];

    for (int i = 0; i < n; ++i) {
        std::cout << "Nombre: ";
        std::cin >> lista[i].nombre;
        std::cout << "Nota: ";
        std::cin >> lista[i].nota;
    }

    delete[] lista;
    return 0;
}
