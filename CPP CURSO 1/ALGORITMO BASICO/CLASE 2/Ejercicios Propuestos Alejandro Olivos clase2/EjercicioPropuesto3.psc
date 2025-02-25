Proceso EjercicioP3
	//declarar variables
	definir num, dig1, dig2, numinv Como Entero
	//entrada
	escribir "Ingrese su numero:"; leer num
	//Proceso 
	dig1=trunc(num/10)
	dig2=num mod 10
	numinv=(dig2*10)+dig1
	//salida
	escribir "El numero invertido es: ",numinv "."
FinProceso