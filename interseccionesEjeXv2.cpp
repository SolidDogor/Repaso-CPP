#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>     // Para std::fixed y std::setprecision
#include <type_traits> // Para std::is_integral
#include <numeric>     // Para std::gcd

using namespace std;

// Declaración de funciones
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
template <typename T>
void imprimirFormaEstandar(T &a, T &b, T &c);
template <typename T>
void imprimirFormaVertice(T &a, T &b, T &c);
template <typename T>
void imprimirFormaFactorizada(T &a, T &p, T &q);

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
        cout << "Desea generar una funcion al azar? (SI = 0 | NO = 1)" << endl;
        cin >> respuesta;

        if (respuesta == 1)
            break;

        int o = numeroRandom(2, 1);

        switch (o)
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
            double a, b, c;
            int e;
            // Generar parámetros como fracciones exactas
            double d = fraccionExacta(i2, f2);
            do
            {
                a = numeroRandom(i2, f2);
            } while (a == 0); // Asegurar que a != 0
            b = numeroRandom(i2, f2);
            c = numeroRandom(i2, f2);
            e = numeroRandom(i1, f1);

            operacionRandom(a, b, c, d, e);
            system("pause");
            break;
        }
        default:
            cout << "Opcion no disponible!" << endl;
            system("pause");
            break;
        }
        system("cls");
    } while (respuesta != 1);

    cout << "Gracias por todo :D" << endl;

    return 0;
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

    imprimirFormaEstandar(a, b, c);

    cout << "La funcion no tiene intersecciones con el eje x." << endl;

    // Forma de vértice
    imprimirFormaVertice(a, b, c);
}

template <typename T>
void unaInterseccion(T &a, T &p, T &d)
{
    T b = a * (p + p);
    T c = a * p * p;

    a /= d;
    b /= d;
    c /= d;

    imprimirFormaEstandar(a, b, c);

    cout << "La funcion tiene una interseccion con el eje x en: (" << -p << "|0)" << endl;

    // Forma de vértice
    imprimirFormaVertice(a, b, c);

    // Forma factorizada
    imprimirFormaFactorizada(a, p, p);
}

template <typename T>
void dosIntersecciones(T &a, T &p, T &q, T &d)
{
    T b = a * (p + q);
    T c = a * p * q;

    a /= d;
    b /= d;
    c /= d;

    imprimirFormaEstandar(a, b, c);
    cout << "La funcion tiene intersecciones con el eje x en: (" << -p << "|0) y (" << -q << "|0)" << endl;

    // Forma de vértice
    imprimirFormaVertice(a, b, c);

    // Forma factorizada
    imprimirFormaFactorizada(a, p, q);
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
    cout << fixed << setprecision(2) << valor; // Imprime con 2 decimales
}

template <typename T>
void imprimirFormaEstandar(T &a, T &b, T &c)
{
    cout << "Forma estandar: f(x) = ";
    if (a != 1)
        imprimirNumero(a);
    cout << "x^2";
    if (b != 0)
    {
        cout << (b < 0 ? " - " : " + ");
        imprimirNumero(abs(b));
        cout << "x";
    }
    if (c != 0)
    {
        cout << (c > 0 ? " + " : " ");
        imprimirNumero(c);
    }
    cout << endl;
}

template <typename T>
void imprimirFormaVertice(T &a, T &b, T &c)
{
    T h = -b / (2 * a);          // Cálculo de h
    T k = c - (b * b) / (4 * a); // Cálculo de k

    cout << "Forma de vertice: f(x) = ";
    if (a != 1)
        imprimirNumero(a);
    cout << "(x"
         << (h < 0 ? " + " : " - ");
    imprimirNumero(abs(h));
    cout << ")^2";
    if (k != 0)
    {
        cout << (k > 0 ? " + " : " ");
        imprimirNumero(k);
    }
    cout << endl;

    cout << "Vertice: (";
    imprimirNumero(h);
    cout << "|";
    imprimirNumero(k);
    cout << ")" << endl;
}

template <typename T>
void imprimirFormaFactorizada(T &a, T &p, T &q)
{
    cout << "Forma factorizada: f(x) = ";
    if (a != 1)
        imprimirNumero(a);
    cout << "(x"
         << (p < 0 ? " - " : " + ");
    imprimirNumero(abs(p));
    cout << ")(x"
         << (q < 0 ? " - " : " + ");
    imprimirNumero(abs(q));
    cout << ")" << endl;
}