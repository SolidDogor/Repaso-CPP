/******************************************************************************
Algoritmo ordenamiento
const N <- 5
tipo
    array[1..N] de entero: vector
var
    vector: v <- {5,4,3,2,1}
    entero: i,j
    entero: aux
inicio
    //proceso: ordenar
    llamar_a ordenar(v, N)
    
    //desplegar vector ordenado
    i <- 1
    mientras( hasta N) hacer
        //iteracion
        escribir(v[i])
        
        i <- i + 1
    fin_mientras
    
fin
def. prototipo
procedimiento intercambio (E/S entero: a,b)
var
    entero: aux
inicio
    aux <- a 
    a <- b 
    b <- aux
fin_procedimiento

procedimiento ordenar(E/S vector: v; E entero: rango)
var
    entero: i, j
inicio
    i <- 1
    mientras( hasta rango-1)hacer
        j <- 1
        mientras( hasta rango-1)hacer
            //iteracion
            si(v[j] > v[j+1])entonces
                //intercambio
                llamar_a intercambio(v[j], v[j+1])
                
            fin_si
            
            j <- j + 1
        fin_mientras
        
        i <- i + 1
    fin_mientras
fin_procedimiento

*******************************************************************************/
//Algoritmo ordenamiento
#include <cstdlib>
#include <iostream>
//tipo
//    array[1..5] de entero: vector
void intercambio( int &a, int &b);
void ordenar(int v[], int rango);
using namespace std;

int main(int argc, char *argv[]){
//var
    const int N = 5;
    int v[5] = {5,4,3,2,1}; //base 0
    int i,j;
    int aux;
//inicio
    //proceso: ordenar
    ordenar(v, N);
    //desplegar vector ordenado
    i = 0;
    while( i < N ){//hacer
        //iteracion
        printf("%d ", v[i]);
        
        i = i + 1;
    }//fin_mientras
    
    return EXIT_SUCCESS;	
}//fin
//def. prototipo
void intercambio (int &a, int &b){
//var
    int aux;
//inicio
    aux = a;
    a = b;
    b = aux;
}//fin_procedimiento
void ordenar(int v[], int rango){
//var
    int i, j;
//inicio
    i = 0;
    while( i < rango-1 ){//hacer
        j = 0;
        while( j < rango-1 ){//hacer
            //iteracion
            if(v[j] > v[j+1]){//entonces
                //intercambio
                //llamar_a 
                intercambio(v[j], v[j+1]);
                
            }//fin_si
            
            j = j + 1;
        }//fin_mientras
        
        i = i + 1;
    }//fin_mientras
}//fin_procedimiento

