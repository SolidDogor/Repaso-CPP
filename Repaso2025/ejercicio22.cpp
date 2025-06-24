#include <iostream>

int* crearArreglo(int n);
void llenarArreglo(int* arr, int n);
int encontrarMaximo(int* arr, int n);

int main() {
    int cantidad = 0;
    std::cout << "Ingrese la cantidad de enteros que tendra su arreglo: ";
    std::cin >> cantidad;

    int* arr = crearArreglo(cantidad);
    llenarArreglo(arr, cantidad);
    int max = encontrarMaximo(arr, cantidad);

    std::cout << "El mayor numero en el arreglo es: " << max << std::endl;

    delete[] arr;
    return 0;
}

int* crearArreglo(int n) {
    return new int[n];
}

void llenarArreglo(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese el numero #" << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

int encontrarMaximo(int* arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}
