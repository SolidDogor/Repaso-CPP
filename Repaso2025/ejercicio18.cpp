#include <iostream>
#include <limits>

float* crearArreglo(int n);
void convertirTemperatura(float* arr, float* arr2, int n);
void mostrar(float* arr1, float* arr2, int n);

int main() {
    int cantidad;
    std::cout << "Cuantas temperaturas desea ingresar? ";
    while (!(std::cin >> cantidad) || cantidad <= 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Intente de nuevo: ";
    }

    float* temperaturasC = crearArreglo(cantidad);
    float* temperaturasF = new float[cantidad];
    convertirTemperatura(temperaturasC, temperaturasF, cantidad);
    mostrar(temperaturasC, temperaturasF, cantidad);

    delete[] temperaturasC;
    delete[] temperaturasF;
    return 0;
}

float* crearArreglo(int n) {
    float* arreglo = new float[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese la temperatura #" << (i + 1) << ": ";
        while (!(std::cin >> arreglo[i])) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada invalida. Intente de nuevo: ";
        }
    }

    return arreglo; // Se retorna la dirección del primer elemento
}

void convertirTemperatura(float* arr1, float* arr2, int n) {
    for (int i = 0; i < n; i++){
        arr2[i] = arr1[i] * (9/5) + 32;
    }
}

void mostrar(float* arr1, float* arr2, int n) {
    std::cout << "Temperaturas: ";
    for (int i = 0; i < n; i++) {
        std::cout << "Dia " << (i + 1) << ": " << arr1[i] << "°C = " << arr2[i] << "°F" << std::endl;
    }
}
