#include <iostream>
#include <limits>

float* crearArreglo(int n);
void mostrarArreglo(float* arr, int n);
void ordenarArreglo(float* arr, int n);
void encontrarMediana(float* arr, int n);

int main() {
    int cantidad;
    std::cout << "Cuantas numeros desea ingresar? ";
    while (!(std::cin >> cantidad) || cantidad <= 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Intente de nuevo: ";
    }

    float* numeros = crearArreglo(cantidad);
    mostrarArreglo(numeros, cantidad);
    ordenarArreglo(numeros, cantidad);
    mostrarArreglo(numeros, cantidad);
    encontrarMediana(numeros, cantidad);

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

void mostrarArreglo(float* arr, int n){
    std::cout << "Imprimiendo arreglo" << std::endl;
    for (int i = 0; i < n; i++){
        std::cout << "Elemento # " << (i + 1) << " : " << arr[i] << std::endl;
    }
}

void ordenarArreglo(float* arr, int n){
    float temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            temp = arr[i];
            if (arr[i] < arr[j]) {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void encontrarMediana(float* arr, int n){
    if(n % 2 != 0) {
        std::cout << "La mediana es: " << arr[n / 2] << std::endl;
    } else {
        float mediana = (arr[(n / 2)] + arr[(n / 2) - 1]) / 2;
        std::cout << "La mediana es: " << mediana << std::endl;
    }
}