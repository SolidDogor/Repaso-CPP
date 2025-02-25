#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>     // Para std::fixed y std::setprecision
#include <type_traits> // Para std::is_integral
#include <numeric>     // Para std::gcd

using namespace std;

// Declaración de funciones
void menu();
int numeroRandom(int i, int f);
double fraccionExacta(int i, int f);
template <typename T>
void ceroIntersecciones(T &a, T &p, T &q, T &d);
template <typename T>
void unaInterseccion(T &a, T &p, T &d);
template <typename T>
void dosIntersecciones(T &a, T &p, T &q, T &d);
template <typename T>
void operacionRandom(T &a, T &p, T &q, T &d, int &e);
template <typename T>
typename std::enable_if<std::is_integral<T>::value>::type imprimirNumero(T valor);
template <typename T>
typename std::enable_if<!std::is_integral<T>::value>::type imprimirNumero(T valor);

int main()
{
    srand(time(0));

    int i1 = 3;   // Rango para e (0, 1, 2)
    int i2 = 201; // Rango para a, b, c, d (-100 a 100)
    int f1 = 0;
    int f2 = -100;

    int respuesta = 0;

    cout << "Bienvenido! :D" << endl;

    do
    {
        menu();
        cin >> respuesta;

        switch (respuesta)
        {
        case 1:
        {
            int a, b, c, d, e;
            do
            {
                a = numeroRandom(i2, f2);
            } while (a == 0); // Asegurar que a != 0
            b = numeroRandom(i2, f2);
            c = numeroRandom(i2, f2);
            d = 1; // Evitar división por cero
            e = numeroRandom(i1, f1);
            operacionRandom(a, b, c, d, e);
            system("pause");
            break;
        }
        case 2: // Respuesta fraccionaria
        {
            // Generar parámetros como fracciones exactas
            double a = fraccionExacta(i2, f2);
            double b = fraccionExacta(i2, f2);
            double c = fraccionExacta(i2, f2);
            double d = fraccionExacta(i2, f2);

            int e = numeroRandom(i1, f1); // Seleccionar tipo de operación

            operacionRandom(a, b, c, d, e);
            system("pause");
            break;
        }
        case 3:
        {
            // Generar números con decimales
            double a, b, c, d;
            int e;
            do
            {
                a = numeroRandom(i2, f2) + numeroRandom(0, 9) / 10.0;
            } while (a == 0.0); // Asegurar que a != 0
            b = numeroRandom(i2, f2) + numeroRandom(0, 9) / 10.0;
            c = numeroRandom(i2, f2) + numeroRandom(0, 9) / 10.0;
            d = numeroRandom(i1, f1) + numeroRandom(0, 9) / 10.0;
            e = numeroRandom(i1, f1);
            operacionRandom(a, b, c, d, e);
            system("pause");
            break;
        }
        case 4:
            cout << "Saliendo del sistema..." << endl;
            system("pause");
            break;
        default:
            cout << "Opcion no disponible!" << endl;
            system("pause");
            break;
        }
        system("cls");
    } while (respuesta != 4);

    cout << "Gracias por todo :D" << endl;

    return 0;
}

void menu()
{
    cout << "---------OPCIONES DISPONIBLES---------" << endl;
    cout << "1.- Respuesta entera" << endl;
    cout << "2.- Respuesta fraccionaria" << endl;
    cout << "3.- Respuesta al azar" << endl;
    cout << "4.- Salir del programa" << endl;
    cout << "A continuacion digite su respuesta: ";
}

// Función que genera solo números enteros
int numeroRandom(int i, int f)
{
    return rand() % (i - f + 1) + f;
}

// Función para generar fracciones exactas
double fraccionExacta(int i, int f)
{
    int denominador = numeroRandom(1, 20);                                        // Denominador entre 1 y 10
    int numerador = denominador * numeroRandom(f / denominador, i / denominador); // Generar numerador divisible
    return static_cast<double>(numerador) / denominador;                          // Retornar la fracción como decimal
}

template <typename T>
void ceroIntersecciones(T &a, T &b, T &c, T &d)
{

    // Asegurar que no haya intersecciones
    if (a > 0)
    {
        c = abs(c) * (rand() % 15 + 1);
    }
    else
    {
        c = -abs(c) * (rand() % 15 + 1);
    }

    a /= d;
    b /= d;
    c /= d;

    cout << "f(x) = ";
    if (a != 1)
        imprimirNumero(a);
    cout << "x^2"
         << (b < 0 ? " - " : " + ");
    imprimirNumero(abs(b));
    cout << "x"
         << (c > 0 ? " + " : " ");
    imprimirNumero(c);
    cout << endl;

    cout << "La funcion no tiene intersecciones con el eje x." << endl;
}

template <typename T>
void unaInterseccion(T &a, T &p, T &d)
{
    T b = a * (p + p);
    T c = a * p * p;

    a /= d;
    b /= d;
    c /= d;

    cout << "f(x) = ";
    if (a != 1)
        imprimirNumero(a);
    cout << "x^2"
         << (b < 0 ? " - " : " + ");
    imprimirNumero(abs(b));
    cout << "x"
         << (c > 0 ? " + " : " ");
    imprimirNumero(c);
    cout << endl;

    cout << "La funcion tiene intersecciones con el eje x en: (" << -p << "|0)" << endl;
}

template <typename T>
void dosIntersecciones(T &a, T &p, T &q, T &d)
{
    T b = a * (p + q);
    T c = a * p * q;

    a /= d;
    b /= d;
    c /= d;

    cout << "f(x) = ";
    if (a != 1)
        imprimirNumero(a);
    cout << "x^2"
         << (b < 0 ? " - " : " + ");
    imprimirNumero(abs(b));
    cout << "x"
         << (c > 0 ? " + " : " ");
    imprimirNumero(c);
    cout << endl;

    cout << "La funcion tiene intersecciones con el eje x en: (" << -p << "|0) y (" << -q << "|0)" << endl;
}

template <typename T>
void operacionRandom(T &a, T &p, T &q, T &d, int &e)
{
    switch (e)
    {
    case 0:
        ceroIntersecciones(a, p, q, d);
        break;
    case 1:
        unaInterseccion(a, p, d);
        break;
    case 2:
        dosIntersecciones(a, p, q, d);
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
    cout << fixed << setprecision(2) << valor; // Imprime con 4 decimales
}