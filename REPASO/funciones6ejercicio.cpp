#include <iostream>

using namespace std;

template <typename T>
T maximo(T a1, T a2, T a3);

int main(){
	
	int e1,e2,e3,max;
	
	cout << "Ingrese el primer entero: "; cin >> e1;
	cout << "Ingrese el segundo entero: "; cin >> e2;
	cout << "Ingrese el tercer entero: "; cin >> e3;
	
	max = maximo(e1,e2,e3);
	
	cout << "El valor maximo es: " << max << endl;
	
	system("pause");
	return 0;
}

template <typename T>
T maximo(T a1, T a2, T a3){
	T max = 0;
	if(a1 > max){
		max = a1;
		if(a2 > max){
			max = a2;
			if(a3 > max){
				max = a3;
			}
		}
	} 
	return max;
}
