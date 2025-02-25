#include <iostream>

using namespace std;

#define TAM 5

void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main(){
	
	int vec[TAM] = {1,2,3,4,5};
	
	cuadrado(vec,TAM);
	muestra(vec,TAM);
	
	system("pause");
	return 0;
}

void cuadrado(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		vec[i] *= vec[i];
	}
}

void muestra(int vec[], int tam){
	for(int i = 0; i < tam; i++){
		cout << vec[i] << " ";
	}
}
