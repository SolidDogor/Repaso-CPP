#include <iostream>

using namespace std;

int main(){
	
	int a[] = {1,2,3,4,5};
	int i,dato = 4;
	char band = 'F';
	
	i = 0;
	while((band == 'F') && (i < 5)){
		if(a[i]==dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'V'){
		cout << "Numero encontrado en la posicion " << i - 1 << " :)" << endl;
	} else if (band == 'F'){
		cout << "Numero no encontrado :(" << endl;
	}
	system("pause");
	return 0;
}
