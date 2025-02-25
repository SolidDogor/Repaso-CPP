#include <iostream>

using namespace std;

int hallarMax(int *,int);	//Prototipo de función

int main(){
	const int nElementos = 5;
	int numeros[nElementos] = {3,5,7,9,12};
	
	cout << "El mayor elemento es: " << hallarMax(numeros,nElementos) << endl;
	//Se puede enviar como parametro: numeros || &numeros[0]
	
	system("pause");
	return 0;
}

int hallarMax(int *dirVec, int nElementos){
	int max = 0;
	
	for(int i = 0; i < nElementos; i++){
		if(*(dirVec+i)>max){	//Numero que hay dentro de la direc de memoria
								//aumenta para recorrer el arreglo
			max = *(dirVec+i);
		}
	}
	return max;
}
