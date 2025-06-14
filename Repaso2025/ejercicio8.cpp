#include <iostream>
#include <limits> // para std::numeric_limits

int main() {
    int alumnos;
    std::cout << "Cuantos alumnos va a ingresar? ";

    while (!(std::cin >> alumnos) || alumnos <= 0) {
        std::cin.clear(); // limpia el error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
        std::cout << "Entrada invalida. Intente de nuevo: ";
    }

    float* notas = new float[alumnos];
    float notaAlta, notaBaja, sumaNotas = 0;
    int aprobados = 0, desaprobados = 0;

    for (int i = 0; i < alumnos; i++) {
        std::cout << "Nota del alumno " << (i + 1) << ": ";

        while (!(std::cin >> notas[i]) || notas[i] < 0 || notas[i] > 20) {
            std::cin.clear(); // limpia el error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // descarta entrada inválida
            std::cout << "Entrada invalida. Intente de nuevo: ";
        }

        if(notas[i] >= 10.5) {aprobados++;}
        else {desaprobados++;}

        if (i == 0) {
            notaAlta = notaBaja = notas[i];
        } else {
            if (notas[i] > notaAlta) notaAlta = notas[i];
            if (notas[i] < notaBaja) notaBaja = notas[i];
        }

        sumaNotas += notas[i];
    }

    std::cout << "\nNota mas alta: " << notaAlta << std::endl;
    std::cout << "Nota mas baja: " << notaBaja << std::endl;
    std::cout << "Nota promedio: " << (sumaNotas / alumnos) << std::endl;
    std::cout << "Cantidad de aprobados: " << aprobados << std::endl;
    std::cout << "Cantidad de desaprobados: " << desaprobados << std::endl;

    delete[] notas;
    return 0;
}
