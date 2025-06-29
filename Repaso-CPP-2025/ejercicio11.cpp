#include <iostream>
#include <limits> // para std::numeric_limits

int main() {
    int jugadores;
    std::cout << "Cuantos jugadores participaron? ";

    while (!(std::cin >> jugadores) || jugadores <= 0) {
        std::cin.clear(); // limpia el error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
        std::cout << "Entrada invalida. Intente de nuevo: ";
    }

    int* puntos = new int[jugadores];
    int mayorPuntaje, menorPuntaje, ganador, sumaPuntos = 0;

    for (int i = 0; i < jugadores; i++) {
        std::cout << "Puntos del jugador #" << (i + 1) << ": ";

        while (!(std::cin >> puntos[i]) || puntos[i] < 0) {
            std::cin.clear(); // limpia el error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
            std::cout << "Entrada invalida. Intente de nuevo: ";
        }

        if (i == 0) {
            mayorPuntaje = menorPuntaje = puntos[i];
            ganador = i;
        } else {
            if (puntos[i] > mayorPuntaje) {mayorPuntaje = puntos[i]; ganador = i + 1;}
            if (puntos[i] < menorPuntaje) menorPuntaje = puntos[i];
        }

        sumaPuntos += puntos[i];
    }

    std::cout << "\nPuntaje mas alto: " << mayorPuntaje << std::endl;
    std::cout << "Puntaje mas bajo: " << menorPuntaje << std::endl;
    std::cout << "Puntaje promedio: " << (sumaPuntos / jugadores) << std::endl;
    std::cout << "Ganador: " << ganador << std::endl;

    delete[] puntos;
    return 0;
}
