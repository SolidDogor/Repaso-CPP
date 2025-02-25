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
    i <- 1
    mientras( hasta N-1)hacer
        j <- 1
        mientras( hasta N)hacer
            //iteracion
            si(v[j] > v[j+1])entonces
                //intercambio
                aux <- v[j]
                v[j] <- v[j+1]
                v[j+1] <- aux
                
            fin_si
            
            j <- j + 1
        fin_mientras
        
        i <- i + 1
    fin_mientras
    
    //desplegar vector ordenado
    i <- 1
    mientras( hasta N) hacer
        //iteracion
        escribir(v[i])
        
        i <- i + 1
    fin_mientras
    
fin

*******************************************************************************/
//Algoritmo ordenamiento
#include <cstdlib>
#include <iostream>
//tipo
//    array[1..5] de entero: vector
using namespace std;

int main(int argc, char *argv[]){
//var
    const int N = 5;
    int v[5] = {5,4,3,2,1};
    int i,j;
    int aux;
//inicio
    i = 0;
    while( i < N-1 ){//hacer
        j = 0;
        while( j < N-1 ){//hacer
            //iteracion
            if(v[j] > v[j+1]){//entonces
                //intercambio
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                
            }//fin_si
            
            j = j + 1;
        }//fin_mientras
        
        i = i + 1;
    }//fin_mientras
    
    //desplegar vector ordenado
    i = 0;
    while( i < N ){//hacer
        //iteracion
        printf("%d ", v[i]);
        
        i = i + 1;
    }//fin_mientras
    
    return EXIT_SUCCESS;	
}//fin

