#include <iostream>
#include <limits>

float* crearArreglo(int n);
void mostrarArreglo(float* arr, int n);
void invertirArreglo(float* arr, int n);

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
    invertirArreglo(numeros, cantidad);
    std::cout << "Arreglo invertido!" << std::endl;
    mostrarArreglo(numeros, cantidad);

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
    std::cout << "Imprimiendo arreglo actual" << std::endl;
    for (int i = 0; i < n; i++){
        std::cout << "Elemento # " << (i + 1) << " : " << arr[i] << std::endl;
    }
}

void invertirArreglo(float* arr, int n){
    float temp = 0;
    int iteraciones = n / 2;
    int cantidadIteraciones = 1;
    for (int i = 0; i < iteraciones; i++){
        temp = arr[i];
        arr[i] = arr [n - cantidadIteraciones];
        arr [n - cantidadIteraciones] = temp;
        cantidadIteraciones++;
    }
}
