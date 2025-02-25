#include <iostream>

using namespace std;

int hallarMax(int *,int);

int main(){
	const int nElementos = 5;
	int numeros[nElementos] = {3,5,19,0,22};
	
	cout << "El mayor elemento del arreglo es: " << hallarMax(numeros,nElementos) << endl;
	
	system("pause");
	return 0;
}

int hallarMax(int *dirVec, int nElementos){
	int max = 0;
	
	for(int i = 0; i < nElementos; i++){
		if(*(dirVec + i) > max){
			max = *(dirVec + i);
		}
	}
	
	return max;
}
