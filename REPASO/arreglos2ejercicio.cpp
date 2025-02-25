#include <iostream>

using namespace std;

int main() {
	
	int numeros[] = {1,2,3,4,5};
	int producto = 1;
	
	for (int i = 0; i < 5; i++) {
		producto *= numeros[i];
	}
	
	cout << "Producto: " << producto << endl;
	
	system("pause");
	return 0;
}
