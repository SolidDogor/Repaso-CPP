#include <iostream>

float* crearArreglo(int n);
void llenarArreglo(float* arr, int n);
void ordenarSeleccion(float* arr, int n);
void mostrarArreglo(float* arr, int n);

int main(){
    int cantidad = 0;

    std::cout << "Ingrese la cantidad de numeros a ingresar: ";
    std:: cin >> cantidad;
    float* arr = crearArreglo(cantidad);
    llenarArreglo(arr, cantidad);

    mostrarArreglo(arr, cantidad);
    ordenarSeleccion(arr, cantidad);
    mostrarArreglo(arr, cantidad);
    
    delete[] arr;
    return 0;
}

float* crearArreglo(int n) {
    return new float[n];
}

void llenarArreglo(float* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "Ingrese el numero #" << (i + 1) << ": " << std::endl;
        std::cin >> arr[i];
    }
}

void ordenarSeleccion(float* arr, int n){
    for (int i = 0; i < n - 1; i++) {
        int indiceMayor = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[indiceMayor]) {
                indiceMayor = j;
            }
        }

        if (indiceMayor != i) {
            float temp = arr[i];
            arr[i] = arr[indiceMayor];
            arr[indiceMayor] = temp;
        }
    }
}

void mostrarArreglo(float* arr, int n) {
    std::cout << "Mostrando arreglo actualmente" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Elemento #" << (i + 1) << ": " << arr[i] << std::endl;
    }
}