/*
	&n = direccion de n
	*n = variable cuya direccion esta almacenada en n
*/

#include <iostream>

using namespace std;

int main(){
	int num,*dir_num;
	
	num = 20;
	dir_num = &num;
	
	cout << "El numero es: " << *dir_num << endl;
	cout << "Direccion de memoria: " << dir_num << endl;
	
	system("pause");
	return 0;
}
