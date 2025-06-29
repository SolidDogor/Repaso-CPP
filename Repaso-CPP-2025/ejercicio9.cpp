#include <iostream>
#include <limits> // para std::numeric_limits

int main() {
    int dias = 7;

    float* ventas = new float[dias];
    float ventaAlta, ventaBaja, sumaVentas = 0;

    for (int i = 0; i < dias; i++) {
        std::cout << "Ventas del dia " << (i + 1) << ": ";

        while (!(std::cin >> ventas[i]) || ventas[i] < 0) {
            std::cin.clear(); // limpia el error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
            std::cout << "Entrada invalida. Intente de nuevo: ";
        }

        if (i == 0) {
            ventaAlta = ventaBaja = ventas[i];
        } else {
            if (ventas[i] > ventaAlta) ventaAlta = ventas[i];
            if (ventas[i] < ventaBaja) ventaBaja = ventas[i];
        }

        sumaVentas += ventas[i];
    }

    std::cout << "\nVenta mas alta: " << ventaAlta << std::endl;
    std::cout << "Venta mas baja: " << ventaBaja << std::endl;
    std::cout << "Venta promedio: " << (sumaVentas / dias) << std::endl;
    std::cout << "Total vendido en la semana: " << sumaVentas << std::endl;

    delete[] ventas;
    return 0;
}
