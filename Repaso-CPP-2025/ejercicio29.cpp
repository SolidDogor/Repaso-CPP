#include <iostream>

struct Libro {
    std::string titulo;
    std::string autor;
    int precio;
};

void mostrarLibro(Libro* l) {
    std::cout << "Titulo: " << l->titulo << std::endl;
    std::cout << "Autor: " << l->autor << std::endl;
    std::cout << "Precio: " << l->precio << std::endl;
}

int main() {
    std::string tit, aut;
    int pre = 0;

    std::cout << "Ingrese el titulo: ";
    std::getline(std::cin, tit);
    std::cout << "Ingrese el autor: ";
    std::getline(std::cin, aut);
    std::cout << "Ingrese el precio: ";
    std::cin >> pre;

    Libro* l = new Libro{tit, aut, pre};
    mostrarLibro(l);
    delete l;
    return 0;
}
