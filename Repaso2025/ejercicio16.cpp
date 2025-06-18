#include <iostream>
using namespace std;

void duplicarImpares(int* arr, int tam);
void mostrarValores(int* arr, int tam);

int main() {
    int nums[] = {0,1,2,3,4,5,6,7,8,9};
    int tam = sizeof(nums) / sizeof(nums[0]);

    cout << "Antes de duplicar impares: \n";
    mostrarValores(nums, tam);

    duplicarImpares(nums, tam);

    cout << "Tras duplicar impares:\n";
    mostrarValores(nums, tam);

    return 0;
}

void duplicarImpares(int* arr, int tam){
    for(int i = 0; i < tam; i++){
        if(arr[i] % 2 != 0){
            arr[i] *= 2;
        }
    }
}

void mostrarValores(int* arr, int tam){
    for (int i = 0; i < tam; i++) {
        cout << "Elemento #" << (i + 1) << ": " << arr[i] << endl;
    }
}
