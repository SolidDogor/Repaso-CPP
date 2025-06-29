#include <iostream>

int* crearArreglo(int n);
void llenarArreglo(int* arr, int n);
void ordenarBurbuja(int* arr, int n);
void mostrarArreglo(int* arr, int n);
int buscarBinario(int* arr, int n, int objetivo);

int main(){
    int cantidad = 0, objetivo = 0;

    std::cout << "Ingrese la cantidad de numeros a ingresar: ";
    std:: cin >> cantidad;
    int* arr = crearArreglo(cantidad);
    llenarArreglo(arr, cantidad);

    mostrarArreglo(arr, cantidad);
    ordenarBurbuja(arr, cantidad);
    mostrarArreglo(arr, cantidad);

    std::cout << "Ingrese el numero a buscar en el arreglo: ";
    std::cin >> objetivo;
    int posicion = buscarBinario(arr, cantidad, objetivo);
    if(posicion == -1){
        std::cout << "No se encontro el objetivo en el arreglo." << std::endl;
    } else {
        std::cout << "La posicion del objetivo es: " << posicion + 1<< std::endl;
    }
    
    delete[] arr;
    std::cout << "Proceso completado correctamente. Gracias por usar el programa!" << std::endl;
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

void ordenarBurbuja(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mostrarArreglo(int* arr, int n) {
    std::cout << "Mostrando arreglo actualmente" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Elemento #" << (i + 1) << ": " << arr[i] << std::endl;
    }
}

int buscarBinario(int* arr, int n, int objetivo) {
    int inicio = 0, fin = n - 1;

    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (arr[medio] == objetivo) {
            return medio; // posición encontrada
        } else if (arr[medio] < objetivo) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    return -1; // no encontrado
}
