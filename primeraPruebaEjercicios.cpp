#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>  // Para std::fixed y std::setprecision

using namespace std;

void menu();
double numeroRandom(double &i, double &f);
void ceroIntersecciones(double &a, double &p, double &q, double &d);
void unaInterseccion(double &a, double &p, double &d);
void dosIntersecciones(double &a, double &p, double &q, double &d);
void operacionRandom(double &a, double &p, double &q, double &d, int &e);

int main() {
    srand(time(0));

    double i1 = 3.0;  // Rango para e (0, 1, 2)
    double i2 = 201.0; // Rango para a, b, c, d (-100 a 100)
    double f1 = 0.0;
    double f2 = -100.0;

    double a, b, c, d;
    int e;
    int respuesta = 0;

    cout << "Bienvenido! :D" << endl;

    do {
        menu();
        cin >> respuesta;

        switch (respuesta) {
            case 1:
                do {
                    a = numeroRandom(i2, f2);
                } while (a == 0.0);  // Asegurar que a != 0
                b = numeroRandom(i2, f2);
                c = numeroRandom(i2, f2);
                d = 1.0;  // Evitar división por cero
                e = 0;  // Forzar caso 0
                operacionRandom(a, b, c, d, e);
                system("pause");
                break;
            case 2:
                cout << "Opcion no disponible todavia" << endl;
                system("pause");
                break;
            case 3:
                do {
                    a = numeroRandom(i2, f2);
                } while (a == 0.0);  // Asegurar que a != 0
                b = numeroRandom(i2, f2);
                c = numeroRandom(i2, f2);
                d = numeroRandom(i2, f2);
                // Asegurar que d no sea cero
                if (d == 0.0) d = 1.0;
                e = 0;  // Forzar caso 0
                operacionRandom(a, b, c, d, e);
                system("pause");
                break;
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

void menu() {
    cout << "---------OPCIONES DISPONIBLES---------" << endl;
    cout << "1.- Respuesta entera" << endl;
    cout << "2.- Respuesta fraccionaria" << endl;
    cout << "3.- Respuesta al azar" << endl;
    cout << "4.- Salir del programa" << endl;
    cout << "A continuacion digite su respuesta: ";
}

double numeroRandom(double &i, double &f) {
    // Generar un número aleatorio entre f y f + i
    return f + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / i));
}

void ceroIntersecciones(double &a, double &b, double &c, double &d) {
    // Asegurar que no haya intersecciones
    if (a > 0.0) {
        // Parábola abre hacia arriba: c debe ser positivo y grande
        c = abs(c) * (rand() % 30 + 1);  // c multiplicado por un numero entre 1 y 30
    } else {
        // Parábola abre hacia abajo: c debe ser negativo y pequeño
        c = -abs(c) * (rand() % 30 + 1);  // c multiplicado por un numero entre -1 y -30
    }

    a /= d;
    b /= d;
    c /= d;

    // Mostrar la función con 4 decimales
    cout << fixed << setprecision(4);
    cout << "f(x) = ";
    if (a != 1.0) cout << a;
    cout << "x^2"
         << (b < 0.0 ? " + " : " - ") << abs(b) << "x"
         << (c > 0.0 ? " + " : " ") << c
         << endl;

    // Mostrar el mensaje de 0 intersecciones
    cout << "La funcion no tiene intersecciones con el eje x." << endl;
}

void unaInterseccion(double &a, double &p, double &d) {
    double b = a * (p + p);
    double c = a * p * p;

    a /= d;
    b /= d;
    c /= d;

    // Mostrar la función con 4 decimales
    cout << fixed << setprecision(4);
    cout << "f(x) = ";
    if (a != 1.0) cout << a;
    cout << "x^2"
         << (b < 0.0 ? " + " : " - ") << abs(b) << "x"
         << (c > 0.0 ? " + " : " ") << c
         << endl;
}

void dosIntersecciones(double &a, double &p, double &q, double &d) {
    double b = a * (p + q);
    double c = a * p * q;

    a /= d;
    b /= d;
    c /= d;

    // Mostrar la función con 4 decimales
    cout << fixed << setprecision(4);
    cout << "f(x) = ";
    if (a != 1.0) cout << a;
    cout << "x^2"
         << (b < 0.0 ? " + " : " - ") << abs(b) << "x"
         << (c > 0.0 ? " + " : " ") << c
         << endl;
}

void operacionRandom(double &a, double &p, double &q, double &d, int &e) {
    switch (e) {
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
