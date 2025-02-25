#include <iostream>

using namespace std;

int main(){
    
    int numeros[100], n, sum = 0, aux;
    
    cout << "Digite la cantidad de elementos del vector: "; 
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cout << "Ingrese un numero: "; cin >> numeros[i];
        sum += numeros[i];
    }
    
    bool encontrado = false;
    
    for (int i = 0; i < n; i++){
        aux = sum - numeros[i];
        if (numeros[i] == aux){
            cout << "El numero " << numeros[i] << " es igual a la suma del resto (" << aux << ")" << endl;
            encontrado = true;
            break;
        }
    }
    
    if (!encontrado) {
        cout << "No hay ningun numero en el vector que sea igual a la suma del resto de los numeros." << endl;
    }
    
    system("pause");
    return 0;
}

