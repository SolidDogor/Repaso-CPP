#include <iostream>

//Ejemplo de estructura Persona
struct Persona {
    std::string nombre;
    int edad;
};

void mostrarPersona(Persona* p) {
    std::cout << "Nombre: " << p->nombre << ", Edad: " << p->edad << std::endl;
}

int main() {
    Persona* p = new Persona{"Alejandro", 21};
    mostrarPersona(p);
    delete p;
    return 0;
}
