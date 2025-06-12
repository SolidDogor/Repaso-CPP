#include <iostream>

void menu();
void mostrarCaracteristica(int* n);

int main(){
    menu();
    return 0;
}

void menu(){
    std::cout << "Bienvenido al programa para mostrar características de un numero!" << std::endl;
    int num, opcion = 0;
    do{
        std::cout << "Opciones \n 1.- Ingresar numero \n 2.- Salir del programa" << std::endl;
        std::cout << "Ingrese su opcion: "; std::cin >> opcion;
        switch (opcion)
        {
        case 1:
            std::cout << "Ingrese su numero: "; std::cin >> num;
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

