#include <iostream>
#include <limits> // para std::numeric_limits
#include <string>

int main() {
    int cantidadPalabras;
    std::cout << "Cuantos palabras va a escribir? ";

    while (!(std::cin >> cantidadPalabras) || cantidadPalabras <= 0) {
        std::cin.clear(); // limpia el error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
        std::cout << "Entrada invalida. Intente de nuevo: ";
    }

    std::string* palabras = new std::string[cantidadPalabras];
    std::string palabraLarga;
    int palabrasMasDeCinco = 0;

    for (int i = 0; i < cantidadPalabras; i++) {
        std::cout << "Ingrese la palabra #" << (i + 1) << ": ";
        std::cin >> palabras[i];

        if (i == 0 || palabras[i].size() > palabraLarga.size()) {
            palabraLarga = palabras[i];
        }

        if(palabras[i].size() > 5) palabrasMasDeCinco++;

    }

    std::cout << "\nPalabras ingresadas:\n";
    for (int i = 0; i < cantidadPalabras; i++) {
        std::cout << "- " << palabras[i] << "\n";
    }
    std::cout << "Palabra mas larga: " << palabraLarga << std::endl;
    std::cout << "Palabras con mas de 5 letras: " << palabrasMasDeCinco << std::endl;

    delete[] palabras;
    return 0;
}
