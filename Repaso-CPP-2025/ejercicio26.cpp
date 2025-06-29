#include <iostream>

int* crearArreglo(int n);
void llenarArreglo(int* arr, int n);
void ordenarInsercion(int* arr, int n);
void mostrarArreglo(int* arr, int n);

int main(){
    int cantidad = 0;

    std::cout << "Ingrese la cantidad de numeros a ingresar: ";
    std:: cin >> cantidad;
    int* arr = crearArreglo(cantidad);
    llenarArreglo(arr, cantidad);

    mostrarArreglo(arr, cantidad);
    ordenarInsercion(arr, cantidad);
    mostrarArreglo(arr, cantidad);
    
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

void ordenarInsercion(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int actual = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > actual) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = actual;
    }
}

void mostrarArreglo(int* arr, int n) {
    std::cout << "Mostrando arreglo actualmente" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Elemento #" << (i + 1) << ": " << arr[i] << std::endl;
    }
}