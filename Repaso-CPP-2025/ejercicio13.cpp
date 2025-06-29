#include <iostream>
#include <limits>

void ingresarPrecios(float* precios, int cantidad);
void calcularEstadisticas(float* precios, int cantidad, float& max, float& min, float& suma);
void ordenarPrecios(float* precios, int cantidad);
void mostrarPrecios(float* precios, int cantidad);

int main() {
    int productos;
    std::cout << "Cuantos productos compraste? ";

    while (!(std::cin >> productos) || productos <= 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada invalida. Intente de nuevo: ";
    }

    float* precios = new float[productos];
    ingresarPrecios(precios, productos);

    float max, min, suma;
    calcularEstadisticas(precios, productos, max, min, suma);

    std::cout << "\nProducto mas caro: " << max << std::endl;
    std::cout << "Producto mas barato: " << min << std::endl;
    std::cout << "Gasto promedio: " << (suma / productos) << std::endl;

    ordenarPrecios(precios, productos);

    std::cout << "Gastos ordenados del menor al mayor:\n";
    mostrarPrecios(precios, productos);

    delete[] precios;
    return 0;
}

// Funciones
void ingresarPrecios(float* precios, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        std::cout << "Precio del producto #" << (i + 1) << ": ";
        while (!(std::cin >> precios[i]) || precios[i] < 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada invalida. Intente de nuevo: ";
        }
    }
}

void calcularEstadisticas(float* precios, int cantidad, float& max, float& min, float& suma) {
    max = min = precios[0];
    suma = precios[0];

    for (int i = 1; i < cantidad; i++) {
        if (precios[i] > max) max = precios[i];
        if (precios[i] < min) min = precios[i];
        suma += precios[i];
    }
}

void ordenarPrecios(float* precios, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        for (int j = 0; j < i; j++) {
            if (precios[i] < precios[j]) {
                float temp = precios[j];
                precios[j] = precios[i];
                precios[i] = temp;
            }
        }
    }
}

void mostrarPrecios(float* precios, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        std::cout << "Producto #" << (i + 1) << ": " << precios[i] << std::endl;
    }
}
