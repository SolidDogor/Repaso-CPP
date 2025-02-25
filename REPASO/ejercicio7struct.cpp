#include <iostream>

using namespace std;

struct Etapas{
	int horas;
	int minutos;
	int segundos;
}et[100];

int main() {
	
	int n_etapas, horas_t = 0, minutos_t = 0, segundos_t = 0;
	
	cout << "Digite cuantas etapas tiene la carrera: "; cin >> n_etapas;
	
	for(int i = 0; i < n_etapas; i++){
		//Pidiendo datos al usuario
		cout << "Horas: "; cin >> et[i].horas;
		cout << "Minutos: "; cin >> et[i].minutos;
		cout << "Segundos: "; cin >> et[i].segundos;
		
		horas_t += et[i].horas;
		minutos_t += et[i].minutos;
		if(minutos_t >= 60){
			minutos_t -= 60;
			horas_t++;
		} 
		segundos_t += et[i].segundos;
		if(segundos_t >= 60){
			segundos_t -= 60;
			minutos_t++;
		} 
		cout << "\n";
	}
	
	cout << "Tiempo total empleado: " << horas_t << ":" 
	<< minutos_t << ":" << segundos_t << endl;
	
	system("pause");
	return 0;
}
