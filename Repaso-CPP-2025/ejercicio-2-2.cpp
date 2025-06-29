#include <iostream>
#include <limits>   //Para std::numeric_limits

bool leerEnteroSeguro(int& valor);
void menu();
bool esPotenciaDeDos(int* n);

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
    
    std::cout << "Bienvenido al programa de comprobracion de potencia de 2!" << std::endl;
    do {
        std::cout << "Para verificar si potencia de 2 presione 1\n";
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
                if(esPotenciaDeDos(&num)){  //Dirección de memoria
                    std::cout << num << " es potencia de 2." << std::endl;
                } else {
                    std::cout << num << " no es potencia de 2." << std::endl;
                }

                system("pause");
                system("cls");
                break;
            default:
                std::cout << "Opcion invalida..." << std::endl;
                break;
            }
    } while (opcion != 0);
    
}

bool esPotenciaDeDos(int* n) {
    if (*n == 1) return true;
    if (*n == 0 || *n % 2 != 0) return false;

    int nuevo = *n / 2;
    return esPotenciaDeDos(&nuevo); // <- punteros en acción 💥
}
