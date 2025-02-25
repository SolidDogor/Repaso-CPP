#include <iostream>
#include <string.h>

using namespace std;

struct Atleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
}atl[100];

int main(){
	
	int n, n_m_alto = 0, a_n_m_alto;
	
	cout << "Digite el numero de atletas: "; cin >> n;
	
	for(int i = 0; i < n; i++){
		fflush(stdin);
		cout << "\nDATOS DEL ATLETA #" << i + 1 << endl;
		cout << "Ingrese el nombre: ";
		cin.getline(atl[i].nombre,20,'\n');
		cout << "Ingrese el pais: ";
		cin.getline(atl[i].pais,20,'\n');
		cout << "Ingrese el numero de medallas: ";
		cin >> atl[i].numero_medallas;
		
		if(atl[i].numero_medallas > n_m_alto){
			n_m_alto = atl[i].numero_medallas;
			a_n_m_alto = i;
		}
	}
	
	
	cout << "\n---DATOS DEL ATLETA CON MAS MEDALLAS---" << endl;
	cout << "Nombre: " << atl[a_n_m_alto].nombre << endl;
	cout << "Pais: " << atl[a_n_m_alto].pais << endl;
	cout << "Numero de medallas: " << atl[a_n_m_alto].numero_medallas << endl;
	
	system("pause");
	return 0;
}
