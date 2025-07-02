#include <iostream>
#include <algorithm>
struct Libro {
    std::string autor;
    std::string titulo;
    int precio;
};

bool comparar(Libro a, Libro b) {
    return a.precio < b.precio;
}

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
        std::cout << "Precio: ";
        std::cin >> lista[i].precio;
    }

    std::cout << "-----------" << std::endl;

    std::sort(lista, lista + n, comparar);

    for (int i = 0; i < n; i++){
        std::cout << lista[i].autor << ": " << lista[i].titulo << std::endl;
    }
        
    delete[] lista;
    return 0;
}
