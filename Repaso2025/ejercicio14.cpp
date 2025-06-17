#include <iostream>
#include <limits>

void ingresarTemperaturas(float* ciudad, int dias);
float promedioCiudad(float* ciudad, int dias);
void encontrarMaximo(float* ciudad, int dias, float& max);

int main() {
    const int ciudades = 3, dias = 7;
    float** temperaturas = new float*[ciudades];
    
    for (int i = 0; i < ciudades; i++) {
        std::cout << "\n--- Ciudad " << (i + 1) << " ---\n";
        temperaturas[i] = new float[dias];
        ingresarTemperaturas(temperaturas[i], dias);
    }

    float mayorPromedio = 0;
    int ciudadMayor = 0;
    float tempGlobalMax = -1e9;
    float sumaTotal = 0;

    for (int i = 0; i < ciudades; i++) {
        float prom = promedioCiudad(temperaturas[i], dias);
        sumaTotal += prom;
        if (prom > mayorPromedio) {
            mayorPromedio = prom;
            ciudadMayor = i;
        }

        float localMax;
        encontrarMaximo(temperaturas[i], dias, localMax);
        if (localMax > tempGlobalMax) tempGlobalMax = localMax;
    }

    std::cout << "\nLa ciudad con mayor temperatura promedio es la ciudad " << (ciudadMayor + 1) << std::endl;
    std::cout << "La temperatura más alta registrada fue: " << tempGlobalMax << "°C\n";
    std::cout << "Temperatura promedio general: " << (sumaTotal / ciudades) << "°C\n";

    for (int i = 0; i < ciudades; i++) delete[] temperaturas[i];
    delete[] temperaturas;

    return 0;
}

void ingresarTemperaturas(float* ciudad, int dias) {
    for (int i = 0; i < dias; i++) {
        std::cout << "Temperatura del dia " << (i + 1) << ": ";
        while (!(std::cin >> ciudad[i])) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada invalida. Intente de nuevo: ";
        }
    }
}

float promedioCiudad(float* ciudad, int dias) {
    float suma = 0;
    for (int i = 0; i < dias; i++) suma += ciudad[i];
    return suma / dias;
}

void encontrarMaximo(float* ciudad, int dias, float& max) {
    max = ciudad[0];
    for (int i = 1; i < dias; i++) {
        if (ciudad[i] > max) max = ciudad[i];
    }
}
