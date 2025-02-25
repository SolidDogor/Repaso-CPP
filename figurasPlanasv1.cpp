#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>     // Para std::fixed y std::setprecision
#include <type_traits> // Para std::is_integral
#include <numeric>     // Para std::gcd
#include <cmath>

using namespace std;

// Declaración de funciones
void menu();
int numeroRandom(int min, int max);
double fraccionExacta(int min, int max);
void cuadrado(int rangoMin, int rangoMax);
void rectangulo(int rangoMin, int rangoMax);
void imprimirFiguraCuadrada(double &a, double &b, double &A, double &u, double &d);
template <typename T>
typename std::enable_if<std::is_integral<T>::value>::type imprimirNumero(T valor);
template <typename T>
typename std::enable_if<!std::is_integral<T>::value>::type imprimirNumero(T valor);

int main()
{
    srand(time(0));

    int rangoMin = 1;   // Cambiar el rango mínimo a 1
    int rangoMax = 100; // Cambiar el rango máximo a 100

    int respuesta = 0;

    cout << "Bienvenido! :D" << endl;

    do
    {
        menu();
        cin >> respuesta;

        switch (respuesta)
        {
        case 0:
        {
            cout << "Saliendo del sistema..." << endl;
            system("pause");
            break;
        }
        case 1:
        {
            cuadrado(rangoMin, rangoMax);
            system("pause");
            break;
        }
        case 2:
        {
            rectangulo(rangoMin,rangoMax);
            system("pause");
            break;
        }
        case 3:
        {
            cout << sin(90);
            system("pause");
            break;
        }
        case 4:
        {

            system("pause");
            break;
        }
        case 5:
        {

            system("pause");
            break;
        }
        case 6:
        {

            system("pause");
            break;
        }
        default:
            cout << "Opcion no disponible!" << endl;
            system("pause");
            break;
        }
        system("cls");
    } while (respuesta != 0);

    cout << "Gracias por todo :D" << endl;

    return 0;
}

void menu()
{
    cout << "----------OPCIONES----------" << endl;
    cout << "1.-Cuadrado\n2.-Rectangulo\n3.-Triangulo" << endl;
    cout << "4.-Paralelogramo\n5.-Trapecio\n6.-Circulo" << endl;
    cout << "Para salir del programa digite 0" << endl;
    cout << "Digite sobre que figura desea trabajar: ";
}

// Función que genera solo números enteros
int numeroRandom(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

// Función para generar fracciones exactas
double fraccionExacta(int min, int max)
{
    int denominador = numeroRandom(1, 15);  //Denominador entre 1 y 15                                    // Denominador entre 1 y 10
    int numerador = denominador * numeroRandom(max / denominador, min / denominador); // Generar numerador divisible
    return static_cast<double>(numerador) / denominador;                          // Retornar la fracción como decimal
}

void cuadrado(int rangoMin, int rangoMax)
{
    double a, A, u, d;
    double b = 0;
    int random = numeroRandom(4, 1);
    switch (random)
    {
    case 1:
        a = fraccionExacta(rangoMin, rangoMax);
        cout << "Lado a: "; imprimirNumero(a);
        cout << "\nCalcule el Area A, perimetro u y diagonal d!" << endl;
        system("pause");
        A = a * a;
        u = 4 * a;
        d = a * sqrt(2);
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    case 2:
        A = fraccionExacta(rangoMin, rangoMax);
        cout << "Area A: "; imprimirNumero(A);
        cout << "\nCalcule el lado a, perimetro u y diagonal d!" << endl;
        system("pause");
        a = sqrt(A);
        u = 4 * a;
        d = a * sqrt(2);
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    case 3:
        u = fraccionExacta(rangoMin, rangoMax);
        cout << "Perimetro u: "; imprimirNumero(u);
        cout << "\nCalcule el lado a, area A y diagonal d!" << endl;
        system("pause");
        a = u / 4;
        A = a * a;
        d = a * (sqrt(2));
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    case 4:
        d = fraccionExacta(rangoMin, rangoMax);
        cout << "Diagonal d: "; imprimirNumero(d);
        cout << "\nCalcule el lado a, area A y perimetro u!" << endl;
        system("pause");
        a = d / sqrt(2);
        A = a * a;
        u = 4 * a;
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    default:
        cout << "Error! Valor de e fuera de rango." << endl;
        break;
    }
}

void rectangulo(int rangoMin, int rangoMax)
{
    double a, b, A, u, d;
    int random = numeroRandom(4, 1);
    switch (random)
    {
    case 1:
        a = fraccionExacta(rangoMin, rangoMax);
        cout << "Lado a: "; imprimirNumero(a);
        b = fraccionExacta(rangoMin,rangoMax);
        cout << "\nLado b: "; imprimirNumero(b);
        cout << "\nCalcule el Area A, perimetro u y diagonal d!" << endl;
        system("pause");
        A = a * b;
        u = (2 * a) + (2 * b);
        d = sqrt((a*a)+(b*b));
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    case 2:
        a = fraccionExacta(rangoMin, rangoMax);
        cout << "Lado a: "; imprimirNumero(a);
        A = fraccionExacta(rangoMin, rangoMax);
        cout << "\nArea A: "; imprimirNumero(A);
        cout << "\nCalcule el lado b, perimetro u y diagonal d!" << endl;
        system("pause");
        b = A / a;
        u = (2 * a) + (2 * b);
        d = sqrt((a*a)+(b*b));
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    case 3:
        a = fraccionExacta(rangoMin, rangoMax);
        cout << "Lado a: "; imprimirNumero(a);
        u = fraccionExacta(rangoMin, rangoMax);
        cout << "\nPerimetro u: "; imprimirNumero(u);
        cout << "\nCalcule el lado b, area A y diagonal d!" << endl;
        system("pause");
        b = u - (2 * a);
        A = a * b;
        d = sqrt((a*a)+(b*b));
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    case 4:
        a = fraccionExacta(rangoMin, rangoMax);
        cout << "Lado a: "; imprimirNumero(a);
        do{
            d = fraccionExacta(rangoMin, rangoMax);
        }while(d < a);
        cout << "\nDiagonal d: "; imprimirNumero(d);
        cout << "\nCalcule el lado b, area A y perimetro u!" << endl;
        system("pause");
        b = sqrt((d*d)-(a*a));
        A = a * b;
        u = (2 * a) + (2 * b);
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    default:
        cout << "Error! Valor de e fuera de rango." << endl;
        break;
    }
}

void imprimirFiguraCuadrada(double &a, double &b, double &A, double &u, double &d){
    cout << "Lado a: "; imprimirNumero(a);
    if(b!=0){
        cout << "\nLado b: "; imprimirNumero(b);
    }
    cout << "\nArea A: "; imprimirNumero(A);
    cout << "\nPerimetro u: "; imprimirNumero(u);
    cout << "\nDiagonal d: "; imprimirNumero(d);
    cout << endl;
}

void triangulo(int rangoMin, int rangoMax){
    double a, A, u, d;
    double b = 0;
    int random = numeroRandom(4, 1);
    switch (random)
    {
    case 1:
        a = fraccionExacta(rangoMin, rangoMax);
        cout << "Lado a: "; imprimirNumero(a);
        cout << "\nCalcule el Area A, perimetro u y diagonal d!" << endl;
        system("pause");
        A = a * a;
        u = 4 * a;
        d = a * sqrt(2);
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    case 2:
        A = fraccionExacta(rangoMin, rangoMax);
        cout << "Area A: "; imprimirNumero(A);
        cout << "\nCalcule el lado a, perimetro u y diagonal d!" << endl;
        system("pause");
        a = sqrt(A);
        u = 4 * a;
        d = a * sqrt(2);
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    case 3:
        u = fraccionExacta(rangoMin, rangoMax);
        cout << "Perimetro u: "; imprimirNumero(u);
        cout << "\nCalcule el lado a, area A y diagonal d!" << endl;
        system("pause");
        a = u / 4;
        A = a * a;
        d = a * (sqrt(2));
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    case 4:
        d = fraccionExacta(rangoMin, rangoMax);
        cout << "Diagonal d: "; imprimirNumero(d);
        cout << "\nCalcule el lado a, area A y perimetro u!" << endl;
        system("pause");
        a = d / sqrt(2);
        A = a * a;
        u = 4 * a;
        imprimirFiguraCuadrada(a,b,A,u,d);
        break;
    default:
        cout << "Error! Valor de e fuera de rango." << endl;
        break;
    }
}

// Función para imprimir números según su tipo
// Si es entero
template <typename T>
typename std::enable_if<std::is_integral<T>::value>::type imprimirNumero(T valor)
{
    cout << valor; // Imprime sin decimales
}

// Si es decimal
template <typename T>
typename std::enable_if<!std::is_integral<T>::value>::type imprimirNumero(T valor)
{
    cout << fixed << setprecision(2) << valor; // Imprime con 2 decimales
}