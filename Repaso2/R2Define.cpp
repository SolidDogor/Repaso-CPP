#define sumar(a,b) a+b
#define multiplicar(a,b) a*b
#define dividir(a,b) a/b

#include <iostream>

int num1 = 10;
int num2 = 12;

int sum, mul;
float divi;

using namespace std;

int main() {
    sum = sumar(num1,num2);
    mul = multiplicar(num1,num2);
    divi = dividir(num2,num1);

    cout << "La suma es: " << sum << endl;
    cout << "La multiplicacion es: " << mul << endl;
    cout << "La division es: " << divi << endl;

    return 0;
}