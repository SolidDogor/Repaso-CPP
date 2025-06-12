#include <iostream>
#include <limits>   //Para std::numeric_limits

bool leerEnteroSeguro(int& valor);
void menu();
void mostrarCaracteristica(int* n);

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
    std::cout << "Bienvenido al programa para mostrar características de un numero!" << std::endl;
    int num, opcion = 0;
    do{
        std::cout << "Opciones \n 1.- Ingresar numero \n 2.- Salir del programa" << std::endl;
        std::cout << "Ingrese su opcion: ";
        while (!leerEnteroSeguro(opcion)) std::cout << "Entrada invalida. Intente nuevamente: ";
        switch (opcion)
        {
        case 1:
            std::cout << "Ingrese su numero: ";
            while (!leerEnteroSeguro(num)) std::cout << "Entrada invalida. Intente nuevamente: ";
            mostrarCaracteristica(&num);
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            std::cout << "Saliendo del programa..." << std::endl;
            system("pause");
        default:
            std::cout << "Opcion invalida! Digite otra opcion.";
            break;
        }
    } while (opcion != 2);
}

void mostrarCaracteristica(int* n){
    if (*n > 0){
        std::cout << "El numero es positivo";
    } else if (*n < 0){
        std::cout << "El numero es negativo";
    } else {
        std::cout << "El numero es cero";
    }

    if (*n % 2 == 0){
        std::cout << " y par." << std::endl;
    } else {
        std::cout << " e impar." << std::endl;
    }
}

