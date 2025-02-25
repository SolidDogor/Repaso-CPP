#include <iostream>

using namespace std;


int main() {
	
	float temperatura, sumaTemperatura, temperaturaMedia;
	
	for (int i = 1; i < 7; i++) {
		cout << "Ingrese la temperatura: "; cin >> temperatura; 
		sumaTemperatura += temperatura;
	}
	
	temperaturaMedia = sumaTemperatura / 6;
	
	cout << "Temperatura media del día: " << temperaturaMedia << endl;
	return 0;
}
