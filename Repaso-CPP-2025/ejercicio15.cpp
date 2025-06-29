#include <iostream>
#include <string>
#include <limits>

using namespace std;

void ingresarNombres(string* nombres, int cantidad);
int contarVocales(const string& nombre);
void nombreConMasVocales(string* nombres, int cantidad);
void mostrarConsonantesPorNombre(string* nombres, int cantidad);

int main() {
    int cantidad;
    cout << "Cuantos nombres desea guardar? ";

    while (!(cin >> cantidad) || cantidad <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Intente de nuevo: ";
    }

    cin.ignore();
    string* nombres = new string[cantidad];
    ingresarNombres(nombres, cantidad);
    nombreConMasVocales(nombres, cantidad);
    mostrarConsonantesPorNombre(nombres, cantidad);

    delete[] nombres;
    return 0;
}

// Funciones

void ingresarNombres(string* nombres, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre #" << (i + 1) << ": ";
        getline(cin, nombres[i]);
    }
}

int contarVocales(const string& nombre) {
    int contador = 0;
    for (char c : nombre) {
        char ch = tolower(c);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            contador++;
        }
    }
    return contador;
}

void nombreConMasVocales(string* nombres, int cantidad) {
    int maxVocales = 0;
    string nombreGanador = nombres[0];

    for (int i = 0; i < cantidad; i++) {
        int v = contarVocales(nombres[i]);
        if (v > maxVocales) {
            maxVocales = v;
            nombreGanador = nombres[i];
        }
    }

    cout << "\nEl nombre con mas vocales es: " << nombreGanador 
    << " (" << maxVocales << " vocales)" << endl;
}

void mostrarConsonantesPorNombre(string* nombres, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        int consonantes = 0;
        for (char c : nombres[i]) {
            char ch = tolower(c);
            if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
                consonantes++;
            }
        }
        cout << "Nombre: " << nombres[i] << " - Consonantes: " << consonantes << endl;
    }
}
