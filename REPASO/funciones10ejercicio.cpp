#include <iostream>

using namespace std;

void calc_anios(int,int&,int&,int&);

int main(){
	
	int dias_transcurridos, anio = 0, mes = 0, dias = 0;
	
	cout << "Ingrese el total de dias transcurridos: "; cin >> dias_transcurridos;
	
	dias_transcurridos += 1;
	
	calc_anios(dias_transcurridos,anio,mes,dias);
	
	cout << "Fecha final: " << dias << "/" << mes << "/" << anio << endl;
	
	system("pause");
	return 0;
}

void calc_anios(int dias_transcurridos, int& anio, int& mes, int& dias){
	
	if(dias_transcurridos > 30){
		mes = (dias_transcurridos / 30) + 1;
		dias = dias_transcurridos % 30;
	} else {
		dias = dias_transcurridos;
		mes = 1;
		anio = 2000;
	}
	
	if(mes > 12){
		anio = (mes / 12) + 2000;
		mes = mes % 12;
	}
	
}
