#include <iostream>
#include <stdlib.h>	//Libreria para generar numero al azar
#include <time.h>	//Libreria para asegurarse de que el numero sea siempre al azar

using namespace std;

//Estructura Persona con los datos requeridos para la estadística de votantes
struct Persona{
	int aprobacion;
	int edad;
	char nivelSE;
}personas[100];	//Se usa un arreglo que hará que como maximo sea 100 votantes

//Prototipos de funciones
void pedirDatos();
int generarNumeroAleatorio(int,int);
char generarLetraAleatoria();
void mostrarDatos(int);

int main(){
	//??
	srand (time(NULL));
	
	//Llamando a la función pedirDatos()
	pedirDatos();
	
	system("pause");
	return 0;
}

//Declaración de funciones
void pedirDatos(){
	//Declarando la variable que contiene la mayor cantidad de personas
	int cantidad;
	
	//Funcion do while para que los votantes estén dentro del rango
	do{
		cout << "Ingrese la cantidad de personas: "; cin >> cantidad;
	}while((cantidad>100) || (cantidad<0));

	//Asignando un valor al azar a cada uno de los votantes
	for(int i = 0; i < cantidad; i++){
		personas[i].aprobacion = generarNumeroAleatorio(1,5);
		personas[i].edad = generarNumeroAleatorio(17,100);
		personas[i].nivelSE = generarLetraAleatoria();
	}
	
	//Llamando a la función mostrarDatos
	mostrarDatos(cantidad);
}

int generarNumeroAleatorio(int ini, int fin){	
	//Como parámetros se manda el rango en el que el número se puede generar
	return rand() % fin + ini;
}

char generarLetraAleatoria(){
	//Función que se apoya con la función generarNumeroAleatorio
	int num = generarNumeroAleatorio(1,4);
	//Si se retorna un numero 1 se asigna la letra A, para el 2 la letra B,
	// para el 3 la letra C y para el 4 la letra D
	switch(num){
		case 1: return 'A';
		case 2: return 'B';
		case 3: return 'C';
		case 4: return 'D';
		default: return 'X';
	}
}

//Función mostrarDatos que se le manda como parámetro la cantidad de votantes
void mostrarDatos(int cantidad){
    int aprobaciones[5] = {0}; // Array para contar las aprobaciones de 1 a 5
    int votantesA = 0, personaJoven = 999;
    
    // Uso de un for para recorrer el arreglo con las personas
    for(int i = 0; i < cantidad; i++){
        cout << "Persona #" << i + 1 << endl;
        cout << "Aprobacion: " << personas[i].aprobacion << endl;
        cout << "Edad: " << personas[i].edad << endl;
        cout << "Nivel socio economico: " << personas[i].nivelSE << endl;
        
        if(personas[i].nivelSE == 'A'){
            votantesA++;
        }
        
        // Incrementa el contador correspondiente en el array de aprobaciones
        aprobaciones[personas[i].aprobacion - 1]++;
        
        // Determina la persona más joven
        if(personas[i].edad < personaJoven){
            personaJoven = personas[i].edad;
        }
    }
    
    // Encontrar el nivel de aprobación más votado
    int maxAprobacion = 0, nivelMayor = 1;
    for(int i = 0; i < 5; i++){
        if(aprobaciones[i] > maxAprobacion){
            maxAprobacion = aprobaciones[i];
            nivelMayor = i + 1; // `i + 1` porque los índices son 0 a 4 pero las aprobaciones van de 1 a 5
        }
    }
    
    // Imprimiendo los datos relevantes
    cout << "\n----DATOS RELEVANTES DE LOS VOTANTES----" << endl;
    cout << "Edad mas joven: " << personaJoven << endl;
    cout << "Cantidad de votantes del A: " << votantesA << endl;
    cout << "Nivel de aprobacion mas votado: " << nivelMayor << endl;
}
