#include <iostream>
#include <limits>
using namespace std;

int* crearArreglo(int n);
void calcularEstadisticas(int* arr, int n);
void mostrar(int* arr, int n);
void ordenarArreglo(float* arr, int n);

int main() {
    int cantidad;
    cout << "Cuantas personas desea ingresar? ";
    while (!(cin >> cantidad) || cantidad <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Intente de nuevo: ";
    }

    int* edades = crearArreglo(cantidad);
    calcularEstadisticas(edades, cantidad);
    ordenarArreglo(edades, cantidad);
    mostrar(edades, cantidad);

    delete[] edades;
    return 0;
}

int* crearArreglo(int n) {
    int* arreglo = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese la edad de la persona #" << (i + 1) << ": ";
        while (!(cin >> arreglo[i])) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida. Intente de nuevo: ";
        }
    }

    return arreglo; // Se retorna la dirección del primer elemento
}

void calcularEstadisticas(int* arr, int n) {
    int edadMax, edadMin, sumaEdades = 0;
    int personasMayores = 0;
    for (int i = 0; i < n; i++){
        if (i == 0) {
            edadMax = edadMin = arr[i];
        } else {
            if (arr[i] > edadMax) edadMax = arr[i];
            if (arr[i] < edadMin) edadMin = arr[i];
        }

        if (arr[i] > 18) personasMayores++;
        
        sumaEdades += arr[i];
    }

    std::cout << "Edad mas alta: " << edadMax << std::endl;
    std::cout << "Edad mas baja: " << edadMin << std::endl;
    std::cout << "Cantidad de personas mayores de edad: " << personasMayores << std::endl;
    std::cout << "Promedio de edades: " << (sumaEdades / n) << std::endl;
}

void mostrar(int* arr, int n) {
    cout << "Edades ingresadas: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ordenarArreglo(int* arr, int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}