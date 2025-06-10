#include <iostream>

void menu();
void comparacion(int x, int y);

int main() {

    return 0;
}

void menu(){
    int num1, num2;
    
    std::cout << "Bienvenido al programa de comparacion de numeros!" << std::endl;
    std::cout << "A continuacion ingrese dos numeros enteros por favor: " << std::endl;

    std::cin >> num1;
    std::cin >> num2;

    comparacion(num1, num2);
}

void comparacion(int x, int y){
    if(x > y){
        std::cout << "El primer numero es mayor por " << x - y << "." << std::endl;
    } else if (x < y) {
        std::cout << "El segundo numero es mayor por " << y - x << "." << std::endl;
    } else {
        std::cout << "Ambos numeros son iguales." << std::endl;
    }
}