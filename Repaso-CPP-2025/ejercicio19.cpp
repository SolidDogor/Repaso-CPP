#include <iostream>
#include <limits>

float* crearArreglo(int n);
void calcularSuma(float* arr, int n);
void calcularPromedio(float* arr, int n);

int main() {
    int cantidad;
    std::cout << "Cuantas numeros desea ingresar? ";
    while (!(std::cin >> cantidad) || cantidad <= 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Intente de nuevo: ";
    }

    float* numeros = crearArreglo(cantidad);
    calcularSuma(numeros, cantidad);
    calcularPromedio(numeros, cantidad);

    delete[] numeros;
    return 0;
}

float* crearArreglo(int n) {
    float* arreglo = new float[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese el numero #" << (i + 1) << ": ";
        while (!(std::cin >> arreglo[i])) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada invalida. Intente de nuevo: ";
        }
    }

    return arreglo; // Se retorna la dirección del primer elemento
}

void calcularSuma(float* arr, int n){
    float suma = 0;
    for (int i = 0; i < n; i++){
        suma += arr[i];
    }
    std::cout << "Suma de todos los numeros ingresados: " << suma << std::endl;
}

void calcularPromedio(float* arr, int n){
    float suma = 0;
    for (int i = 0; i < n; i++){
        suma += arr[i];
    }
    std::cout << "Promedio: " << (suma / n) << std::endl;
}
