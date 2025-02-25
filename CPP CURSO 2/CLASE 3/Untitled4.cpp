/***********************Escritura**********************************************
Algoritmo. Escritura_Caracter_Dispositivo
tipo
	archivo_s de caracter: idFile
var
	idFile: idf
	caracter: letra
inicio
	letra <- 'a'
	
	//paso 1: definir dispositivo, y obtener canal de comunicacion
	crear(idf, "datos.txt")
	abrir(idf, "datos.txt", e)	//modo escritura (sobrescribe)

	si(idf = NULL)entonces
		escribir("Error de acceso")
		salir()
	fin_si

	//paso 2: usar canal de comunicacion: escribir / leer
	escribirArchivo(idf, letra)

	//paso 3: cerrar el canal de comunicacion
	cerrar(idf)

fin


---------------------------lectura desde dispositivo---------------------------

Algoritmo. Leer_Caracter_Dispositivo
tipo
	archivo_s de caracter: idFile
var
	idFile: idf
	caracter: letra
inicio
	letra <- 'a'
	
	//paso 1: definir dispositivo, y obtener canal de comunicacion
	abrir(idf, "datos.txt", l)	//modo lectura

	si(idf = NULL)entonces
		escribir("Error de acceso")
		salir()
	fin_si

	//paso 2: usar canal de comunicacion: escribir / leer
	repetir
		letra <- leerArchivo(idf)
		escribir(letra)
	hasta_que(EOF)
	
	//paso 3: cerrar el canal de comunicacion
	cerrar(idf)


fin


*******************************************************************************/
/*
//Algoritmo. Escritura_Caracter_Dispositivo
#include <cstdlib>
#include <iostream>
//tipo
//	archivo_s de caracter: idFile
	
using namespace std;

int main(int argc, char *argv[]){
//var
	FILE *idf;
	char letra;
//inicio
	letra = 'a';
	
	//paso 1: definir dispositivo, y obtener canal de comunicacion
	//crear(idf, "datos.txt")
	//abrir(idf, "datos.txt", a)	//modo escritura (sobrescribe/añade)
	idf = fopen("datos.txt", "a");

	if(idf == NULL){//entonces
		puts("Error de acceso");
		exit(-1);
	}//fin_si

	//paso 2: usar canal de comunicacion: escribir / leer
	fputc(letra, idf);

	//paso 3: cerrar el canal de comunicacion
	fclose(idf);

	return EXIT_SUCCESS;	
}//fin
//def. prototipos
*/

//Algoritmo. Leer_Caracter_Dispositivo
#include <cstdlib>
#include <iostream>
//tipo
//	archivo_s de caracter: idFile

using namespace std;

int main(int argc, char *argv[]){
//var
	FILE *idf;
	char letra;
//inicio
	letra = 'a'
	
	//paso 1: definir dispositivo, y obtener canal de comunicacion
	idf = fopen("datos.txt", "r");	//modo lectura

	if(idf = NULL){//entonces
		puts("Error de acceso");
		exit(-1);
	}//fin_si

	//paso 2: usar canal de comunicacion: escribir / leer
	letra = fgetc(idf)
	while(!feof){
		printf("%c", letra)
		letra = fgetc(idf)
	}

	//paso 3: cerrar el canal de comunicacion
	fclose(idf);


}//fin

-----------------------------MENU-----------------------------
1.- Escribir en disco
2.- Leer desde disco
3.- Salir
---------------------------------
Seleccionar Opcion:





Nota: seleccionar opc.
	mientras(opc = 3)hacer
		llamar_a menu()
		leer(opc)
		
		segun_sea(opc)hacer
			1: llamar_a grabar(letra)
			2: llamar_a abrir()
			3: salir()
			
		fin_segun
		
		
	fin_mientras
	
	
	
	
	
	
