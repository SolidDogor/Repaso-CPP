/******************************************************************************
Algoritmo. Busqueda lineal
tipo
    array[1..15] de caracter: cadena
    array[1..8] de cadena: lstEmp
var
    cadena: nombre
    lstEmp: emp
    logico: sw
    entero: i
inicio
    sw <- falso
    asignar empleados
    emp[1] <- "Alexandra"
    emp[2] <- "Fernando"
    emp[3] <- "Rosario"
    emp[4] <- "Margarita"
    emp[5] <- "Rodrigo"
    emp[6] <- "Nicolas"
    emp[7] <- "Raquel"
    emp[8] <- "Daniel"
    
    //entrada teclado
    escribir("Ingrese nombre a buscar: ")
    Leer(nombre)
    
    //busqueda por comparacion
    i <- 1
    mientras( hasta 15)hacer
        //iteracion
        si(nombre = emp[i])entonces
            sw <- verdadero
        fin_si
        
        i <- i + 1
    fin_mientras
    
    //mostrar mensaje
    si(sw = verdadero)entonces
        escribir("Encontrado")
    si_no
        escribir("NO-encontrado")
    fin_si
    
fin



*******************************************************************************/
//Algoritmo. Busqueda lineal
#include <cstdlib>
#include <iostream>
#include <cstring>
//tipo
//    array[1..15] de caracter: cadena
//    array[1..8] de cadena: lstEmp
using namespace std;

int main(int argc, char *argv[]){
//var
    char nombre[15];    //base 0
    char emp[8][15];
    bool sw;
    int i;
//inicio
    sw = false;
    //asignar empleados
    strcpy(emp[0], "Alexandra");
    strcpy(emp[1], "Fernando");
    strcpy(emp[2], "Rosario");
    strcpy(emp[3], "Margarita");
    strcpy(emp[4], "Rodrigo");
    strcpy(emp[5], "Nicolas");
    strcpy(emp[6], "Raquel");
    strcpy(emp[7], "Daniel");
    
    //entrada teclado
    printf("Ingrese nombre a buscar: ");
    scanf("%s", nombre);
    
    //busqueda por comparacion: strcmp
    i = 0;
    while( i < 15){//hacer
        //iteracion
        if(strcmp(nombre, emp[i])==0){//entonces
            sw = true;
        }//fin_si
        
        i = i + 1;
    }//fin_mientras
    
    //mostrar mensaje
    if(sw == true){//entonces
        puts("Encontrado");
    }else{
        puts("NO-encontrado");
    }//fin_si
    
    return EXIT_SUCCESS;	
}//fin
