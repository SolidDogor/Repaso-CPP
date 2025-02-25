#include <iostream>

using namespace std;

#define cantidadAlumnos 5;
#define cantidadExamenes 3;

int main() {
	
	int nota, examenAprobado, ultimoExamenAprobado, todoAprobado, unoAprobado, unicoAprobado;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Ingrese la nota #"<< j+1 << " del alumno #" << i+1 << ": "; cin >> nota;
			if (j == 2){
				if (nota < 21 && nota > 10){
					ultimoExamenAprobado++;
				}
			} else {
				if (nota < 21 && nota > 10){
					examenAprobado++;
				}
			}
		}
		if (examenAprobado == 2 && ultimoExamenAprobado == 1) {
			todoAprobado++;
		} else if (examenAprobado == 1 || ultimoExamenAprobado == 1) {
			unoAprobado++;
		} else if (ultimoExamenAprobado == 1) {
			unicoAprobado++;
		}
	}
	cout << "Cantidad de alumnos que aprobaron todo: " << todoAprobado << endl;
	cout << "Cantidad de alumnos que aprobaron solo un examen: " << unoAprobado << endl;
	cout << "Cantidad de alumnos que aprobaron unicamente el ultimo examen: " << unicoAprobado << endl;
	
	return 0;
}
