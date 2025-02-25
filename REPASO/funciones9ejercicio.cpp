#include <iostream>

using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	
	int totalSeg, horas = 0, minutos = 0, segundos = 0;
	
	cout << "Ingrese el total de segundos: "; cin >> totalSeg;
	
	tiempo(totalSeg,horas,minutos,segundos);
	
	cout << "Tiempo total: " << horas << ":" << minutos << ":" << segundos << endl;
	
	system("pause");
	return 0;
}

void tiempo(int totalSeg, int& horas, int& minutos, int& segundos){
	
	if(totalSeg >= 60){
		minutos = totalSeg / 60;
		segundos = totalSeg % 60;
	} else {
		segundos = totalSeg;
	}
	
	if(minutos >= 60){
		horas = minutos / 60;
		minutos = minutos % 60;
	}
	
}
