#include <iostream>

int fibonacci(int n);

int main() {
    int num;
    std::cout << "Ingrese un numero: " << std::endl;
    std::cin >> num;
    std::cout << fibonacci(num - 1) << std::endl;

    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci (n-2);
    }
}