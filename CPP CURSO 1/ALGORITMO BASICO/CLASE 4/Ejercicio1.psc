Proceso Ejercicio1
	//declarar variables
	definir num,r Como Entero
	definir mensaje Como Caracter
	//entrada
	escribir "Ingresar N�mero:";leer num
	//Proceso
	r=num mod 2
	si r=0 Entonces
		mensaje="Es par"
	SiNo
		mensaje="Es Impar"
	FinSi
	//salida
	escribir "El n�mero es:", mensaje

FinProceso
