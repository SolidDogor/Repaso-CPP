#include <iostream>

int* crearArreglo(int n);
void llenarArreglo(int* arr, int n);
int contarMultiplos(int* arr, int n, int k);

int main(){
    int cantidad = 0, numero = 0;

    std::cout << "Ingrese la cantidad de numeros a ingresar: ";
    std:: cin >> cantidad;
    int* arr = crearArreglo(cantidad);
    llenarArreglo(arr, cantidad);

    std::cout << "Ingrese un numero para buscar sus multiplos en el arreglo: ";
    std::cin >> numero;
    
    if (numero == 0) {
    std::cout << "No se puede buscar multiplos de 0." << std::endl;
    } else {
        int cantidadMultiplos = contarMultiplos(arr, cantidad, numero);
        std::cout << "La cantidad de multiplos de " << numero << " en el arreglo son: ";
        std::cout << cantidadMultiplos << std::endl;
    }
    
    delete[] arr;
    return 0;
}

int* crearArreglo(int n) {
    return new int[n];
}

void llenarArreglo(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese el numero #" << (i + 1) << ": " << std::endl;
        std::cin >> arr[i];
    }
}

int contarMultiplos(int* arr, int n, int k) {
    int cantidadMultiplos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % k == 0) cantidadMultiplos++;
    }
    return cantidadMultiplos;
}