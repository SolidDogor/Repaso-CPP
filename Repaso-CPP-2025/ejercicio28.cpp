#include <iostream>

int* crearArreglo(int n);
void llenarArreglo(int* arr, int n);
int sumarArreglo(int* arreglo, int cantidad);
bool encontrarNumero(int* arreglo, int cantidad, int numero);
void contarNumerosParesImpares(int* arreglo, int cantidad);
void mostrarArreglo(int* arreglo, int cantidad);
void ordenarSeleccion(int* arreglo, int cantidad);
int* crearArregloMultiplo(int* arregloOriginal, int cantidad, int multiplo, int& cantidadMultiplos);

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
        std::cout << "El numero " << numero << " si se encuentra dentro del arreglo!" << std::endl;
    } else {
        std::cout << "Numero " << numero << " no encontrado dentro de la funcion..." << std::endl;
    }

    contarNumerosParesImpares(arr,cantidad);

    std::cout << "Mostrando arreglo" << std::endl;
    mostrarArreglo(arr, cantidad);
    ordenarSeleccion(arr, cantidad);
    std::cout << "Mostrando arreglo ordenado" << std::endl;
    mostrarArreglo(arr, cantidad);

    int multiplo = 0;
    std::cout << "Ingrese un numero para crear nuevo arreglo con sus multiplos: ";
    std::cin >> multiplo;

    int cantidadMultiplos = 0;
    int* arrMultiplos = crearArregloMultiplo(arr, cantidad, multiplo, cantidadMultiplos);

    std::cout << "Mostrando arreglo con multiplos de " << multiplo << std::endl;
    mostrarArreglo(arrMultiplos, cantidadMultiplos);

    delete[] arrMultiplos;
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

void contarNumerosParesImpares(int* arreglo, int cantidad){
    int cantidadPares = 0, cantidadImpares = 0;
    for (int i = 0; i < cantidad; i++){
        if (arreglo[i] % 2 == 0){
            cantidadPares++;
        } else {
            cantidadImpares++;
        }
    }

    std::cout << "Cantidad de numeros pares dentro del arreglo: " << cantidadPares << std::endl;
    std::cout << "Cantidad de numeros impares dentro del arreglo: " << cantidadImpares << std::endl;
}

void mostrarArreglo(int* arreglo, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        std::cout << "Elemento " << (i + 1) << " : " << arreglo[i] << std::endl;
    }
}

void ordenarSeleccion(int* arr, int cant) {
    int temp = 0;
    int minIndex = 0;
    for (int i = 0; i < cant; i++) {
        minIndex = i;
        int j = i + 1;
        while (j < cant) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            j++;
        }
        // Intercambio
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int* crearArregloMultiplo(int* arregloOriginal, int cantidad, int multiplo, int& cantidadMultiplos) {
    int* arregloNuevo = new int[cantidad];
    cantidadMultiplos = 0;

    for (int i = 0; i < cantidad; i++) {
        if (arregloOriginal[i] % multiplo == 0) {
            arregloNuevo[cantidadMultiplos] = arregloOriginal[i];
            cantidadMultiplos++;
        }
    }

    return arregloNuevo;
}
