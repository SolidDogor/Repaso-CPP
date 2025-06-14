#include <iostream>
#include <limits> // para std::numeric_limits

int main() {
    int dias;
    std::cout << "Cuantos dias vas a ingresar? ";

    while (!(std::cin >> dias) || dias <= 0) {
        std::cin.clear(); // limpia el error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
        std::cout << "Entrada invalida. Intente de nuevo: ";
    }

    float* temperaturas = new float[dias];
    float temperaturaAlta, temperaturaBaja, sumaTemperaturas = 0;

    for (int i = 0; i < dias; i++) {
        std::cout << "Temperatura del dia " << (i + 1) << ": ";

        while (!(std::cin >> temperaturas[i])) {
            std::cin.clear(); // limpia el error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
            std::cout << "Entrada invalida. Intente de nuevo: ";
        }

        if (i == 0) {
            temperaturaAlta = temperaturaBaja = temperaturas[i];
        } else {
            if (temperaturas[i] > temperaturaAlta) temperaturaAlta = temperaturas[i];
            if (temperaturas[i] < temperaturaBaja) temperaturaBaja = temperaturas[i];
        }

        sumaTemperaturas += temperaturas[i];
    }

    std::cout << "\nTemperatura mas alta: " << temperaturaAlta << "C" << std::endl;
    std::cout << "Temperatura mas baja: " << temperaturaBaja << "C" << std::endl;
    std::cout << "Temperatura promedio: " << (sumaTemperaturas / dias) << "C" << std::endl;

    delete[] temperaturas;
    return 0;
}
