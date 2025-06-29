#include <iostream>

int* crearArreglo(int n);
void llenarArreglo(int* arr, int n);
int sumarArreglo(int* arreglo, int cantidad);
bool encontrarNumero(int* arreglo, int cantidad, int numero);

int main(){
    int cantidad = 0, numero = 0;
    std::cout << "Ingrese la cantidad de numeros dentro del arreglo: ";
    std::cin >> cantidad;
    int* arr = crearArreglo(cantidad);
    llenarArreglo(arr, cantidad);

    int suma = sumarArreglo(arr, cantidad);

    std::cout << "La cantidad de la suma dentro del arreglo es: " << suma << std::endl;
    
    std::cout << "Que numero desea buscar?" << std::endl;
    std::cin >> numero;
    if(encontrarNumero(arr,cantidad,numero)) {
        std::cout << "El numero si se encuentra dentro del arreglo!" << std::endl;
    } else {
        std::cout << "Numero no encontrado dentro de la funcion..." << std::endl;
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

int sumarArreglo(int* arreglo, int cantidad){
    int suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += arreglo[i];
    }

    return suma;
}

bool encontrarNumero(int* arreglo, int cantidad, int numero){
    for (int i = 0; i < cantidad; i++) {
        if (arreglo[i] == numero) {
            return true;
        }
    }
    return false;
}