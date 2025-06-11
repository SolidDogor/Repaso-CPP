#include <iostream>
#include <limits>   //Para std::numeric_limits
#include <math.h>

bool leerEnteroSeguro(int& valor);
void menu();
void invertir(int* n);

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
    
    std::cout << "Bienvenido al programa para invertir dos numeros!" << std::endl;
    do {
        std::cout << "Para ingresar un numero presione 1\n";
        std::cout << "Para salir del programa presione 0" << std::endl;

        while (!leerEnteroSeguro(opcion)) {
            std::cout << "Entrada invalida. Intente nuevamente: ";
        }

        switch (opcion)
            {
            case 0:
                std::cout << "Saliendo del programa!" << std::endl;
                break;
            case 1:
                std::cout << "A continuacion ingrese un numero entero por favor: " << std::endl;

                while (!leerEnteroSeguro(num)) {
                    std::cout << "Entrada invalida. Intente nuevamente: ";
                }
                invertir(&num);
                system("pause");
                system("cls");
                break;
            default:
                std::cout << "Opcion invalida..." << std::endl;
                break;
            }
    } while (opcion != 0);
    
}

void invertir(int* n) {
    int contador = 0;
    int num = *n;
    int resultado = 0;

    int copia = num;
    while (copia /= 10) {
        contador++;
    }

    int unidad = num / pow(10,contador);

    while (*n != 0) {
        int numTemporal = (*n % 10) * pow(10, contador);
        resultado += numTemporal;
        *n /= 10;
        contador--;
    }
    //Falta resolver
    std::cout << "El numero invertido es: " << resultado + unidad << std::endl;
}

