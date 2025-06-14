#include <iostream>
#include <limits> // para std::numeric_limits

int main() {
    int respuestas;
    std::cout << "Cuantos respuestas va a ingresar? ";

    while (!(std::cin >> respuestas) || respuestas <= 0) {
        std::cin.clear(); // limpia el error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
        std::cout << "Entrada invalida. Intente de nuevo: ";
    }

    int* satisfacciones = new int[respuestas];
    int respuestaAlta, respuestaBaja, sumaRespuestas = 0;

    for (int i = 0; i < respuestas; i++) {
        std::cout << "Satisfaccion del encuestado #" << (i + 1) << ": ";

        while (!(std::cin >> satisfacciones[i]) || satisfacciones[i] < 1 || satisfacciones[i] > 5) {
            std::cin.clear(); // limpia el error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
            std::cout << "Entrada invalida. Intente de nuevo: ";
        }

        if (i == 0) {
            respuestaAlta = respuestaBaja = satisfacciones[i];
        } else {
            if (satisfacciones[i] > respuestaAlta) respuestaAlta = satisfacciones[i];
            if (satisfacciones[i] < respuestaBaja) respuestaBaja = satisfacciones[i];
        }

        sumaRespuestas += satisfacciones[i];
    }

    std::cout << "\nCantidad encuestados: " << respuestas << std::endl;
    std::cout << "Satisfaccion mas alta: " << respuestaAlta << std::endl;
    std::cout << "Satisfaccion mas baja: " << respuestaBaja << std::endl;
    std::cout << "Satisfaccion promedio: " << (sumaRespuestas / respuestas) << std::endl;

    delete[] satisfacciones;
    return 0;
}
