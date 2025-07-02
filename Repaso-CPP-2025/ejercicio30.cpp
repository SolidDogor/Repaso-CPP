#include <iostream>
struct Libro {
    std::string autor;
    std::string titulo;
};

int main() {
    int n;
    std::cout << "Cantidad de libros: ";
    std::cin >> n;

    Libro* lista = new Libro[n];

    for (int i = 0; i < n; ++i) {
        std::cout << "Autor: ";
        std::cin >> lista[i].autor;
        std::cout << "Titulo: ";
        std::cin >> lista[i].titulo;
    }

    std::cout << "-----------" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << "Autor: " << lista[i].autor << std::endl;
        std::cout << "Titulo: " << lista[i].titulo << std::endl;
    }

    delete[] lista;
    return 0;
}
