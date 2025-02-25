#include <iostream>

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void ordenarExtremos(int arr[], int n) {
    int i = 0;
    while (i < n / 2) {
        int minIndex = i;
        int maxIndex = i;

        // Buscar el índice del mínimo y máximo en el rango [i, n - i - 1]
        for (int j = i; j <= n - i - 1; j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
            if (arr[j] > arr[maxIndex]) maxIndex = j;
        }

        // Intercambiar el menor con la posición i si es necesario
        if (minIndex != i) {
            std::swap(arr[minIndex], arr[i]);
            
            // Si el máximo estaba en i, actualizar su índice
            if (maxIndex == i) {
                maxIndex = minIndex;
            }
        }

        // Intercambiar el mayor con la posición (n - i - 1) si es necesario
        if (maxIndex != (n - i - 1)) {
            std::swap(arr[maxIndex], arr[n - i - 1]);
        }

        i++;
    }
}

int main() {
    int arr[] = {3, 2, 4, 7, 1, 0, 9, 8, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Arreglo original: ";
    imprimirArray(arr, n);

    ordenarExtremos(arr, n);

    std::cout << "Arreglo ordenado: ";
    imprimirArray(arr, n);

    return 0;
}
