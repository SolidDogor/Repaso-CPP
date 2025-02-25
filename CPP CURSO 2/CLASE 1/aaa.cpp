/******************************************************************************
Algoritmo
var
    entero: a, b, aux
inicio
    a = 7
    b = 5
    comparacion
    si(a es mayor que b)entonces
        //intercambio
        aux = a
        a = b
        b = aux
    fin_si
    confirmar intercambio
    escribir(a, b)
    
fin
def. prototipo
*******************************************************************************/
//Algoritmo

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){
//var
    int a, b, aux;
//inicio
    a = 7;
    b = 5;
    //comparacion
    if(a > b){//entonces
        //intercambio
        aux = a;
        a = b;
        b = aux;
    }//fin_si
    //confirmar intercambio
    printf("%d %d", a, b);
    
    return EXIT_SUCCES;
}//fin
//def. prototipo

