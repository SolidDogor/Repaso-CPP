//libreria de e/s de datos
#include <iostream>
#include <conio.h>
using namespace std;
bool multi(int a, int b){
	return (a % b == 0 ? 1 :0);;
}
int main(){
    //declarar variables
    int a,b,num;
    //proceso
    for(a = 1; a <= 9; a++){
    	for(b = 0; b <= 9; b++){
			num = b + 3 * 10 + a * 100 + 4 * 1000 + b * 10000 + a * 100000;
			if(multi(num, 45) == 1){
				cout << "a: " << a << endl;
				cout << "b: " << b << endl;
				cout << "a+b= " << a + b << endl << endl;
			}
		}
	};
    //salida
    system("pause");
}
