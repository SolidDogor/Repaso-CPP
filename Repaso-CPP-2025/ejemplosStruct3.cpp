#include <iostream>
#include <algorithm>
struct Alumno {
    std::string nombre;
    int nota;
};

bool comparar(Alumno a, Alumno b) {
    return a.nota < b.nota;
}

int main() {
    Alumno alumnos[3] = {{"Ana", 14}, {"Luis", 17}, {"Carlos", 12}};
    std::sort(alumnos, alumnos + 3, comparar);

    for (auto& a : alumnos)
        std::cout << a.nombre << ": " << a.nota << std::endl;
    return 0;
}