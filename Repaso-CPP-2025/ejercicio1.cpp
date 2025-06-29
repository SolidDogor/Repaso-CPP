#include <iostream>
#include <limits>   //Para std::numeric_limits

bool leerEnteroSeguro(int& valor);
void menu();
void comparacion(int* x, int* y);   //Puntero a entero

int main() {
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
    int num1, num2;
    int opcion;
    
    std::cout << "Bienvenido al programa de comparacion de numeros!" << std::endl;
    do {
        std::cout << "Para comparar dos numeros presione 1\n";
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
                std::cout << "A continuacion ingrese dos numeros enteros por favor: " << std::endl;

                std::cout << "Ingrese el primer numero entero: ";
                while (!leerEnteroSeguro(num1)) {
                    std::cout << "Entrada invalida. Intente nuevamente: ";
                }

                std::cout << "Ingrese el segundo numero entero: ";
                while (!leerEnteroSeguro(num2)) {
                    std::cout << "Entrada invalida. Intente nuevamente: ";
                }

                comparacion(&num1, &num2);  //Dirección de memoria

                system("pause");
                system("cls");
                break;
            default:
                std::cout << "Opcion invalida..." << std::endl;
                break;
            }
    } while (opcion != 0);
    
}

void comparacion(int* x, int* y){
    if(*x > *y){    //Accediendo al valor apuntado
        std::cout << "El primer numero es mayor por " << *x - *y << "." << std::endl;
    } else if (*x < *y) {
        std::cout << "El segundo numero es mayor por " << *y - *x << "." << std::endl;
    } else {
        std::cout << "Ambos numeros son iguales." << std::endl;
    }
}
