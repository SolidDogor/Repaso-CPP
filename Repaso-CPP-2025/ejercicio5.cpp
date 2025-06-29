#include <iostream>
#include <limits>   //Para std::numeric_limits
#include <math.h>

bool leerEnteroSeguro(int& valor);
void menu();
void sumar(int* n);

int main(){
    menu();
    return 0;
}

bool leerEnteroSeguro(int& valor) {
    std::cin >> valor;

    if (std::cin.fail()) {
        std::cin.clear();   //Limpia el estado de error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Descarta entrada inválida
        return false;
    }

    return true;
}

void menu(){
    int num;
    int opcion;
    
    std::cout << "Bienvenido al programa para sumar las cifras de un numero!" << std::endl;
    do {
        std::cout << "Para ingresar un numero presione 1\n";
        std::cout << "Para salir del programa presione 0" << std::endl;

        while (!leerEnteroSeguro(opcion)) std::cout << "Entrada invalida. Intente nuevamente: ";

        switch (opcion)
            {
            case 0:
                std::cout << "Saliendo del programa!" << std::endl;
                break;
            case 1:
                std::cout << "A continuacion ingrese un numero entero por favor: " << std::endl;

                while (!leerEnteroSeguro(num)) std::cout << "Entrada invalida. Intente nuevamente: ";
                sumar(&num);
                system("pause");
                system("cls");
                break;
            default:
                std::cout << "Opcion invalida..." << std::endl;
                break;
            }
    } while (opcion != 0);
    
}

void sumar(int* n) {
    int contador = 0;
    int copia = *n;
    int resultado = 0;

    while (copia /= 10) contador++;

    while (*n != 0) {
        resultado += (*n % 10);
        *n /= 10;
        contador--;
    }

    std::cout << "La suma de las cifras es: " << resultado << std::endl;
}
