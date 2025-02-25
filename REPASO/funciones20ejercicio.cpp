#include <iostream>

using namespace std;

int Fibonacci(int);

int main(){
	
	int n;
	do{
		cout << "Ingrese un numero: "; cin >> n;
	
		for(int i = 0; i <= n; i++){
			cout << Fibonacci(i) << " ";
		}
		cout << endl;
	}while(n != -1);
	
	system("pause");
	return 0;
}

int Fibonacci(int n){
	if(n == 1 || n == 0){
		return n;
	} else {
		return (Fibonacci(n-2)+Fibonacci(n-1));
	}
}
