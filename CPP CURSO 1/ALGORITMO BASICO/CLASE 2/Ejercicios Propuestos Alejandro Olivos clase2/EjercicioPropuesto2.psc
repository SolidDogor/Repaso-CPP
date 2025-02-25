Proceso EjercicioP2
	//declarar variables
	definir num, dig1, dig2 Como Entero
	definir prom Como Real
	//entrada
	escribir "Ingrese su numero:"; leer num
	//Proceso 
	dig1=trunc(num/10)
	dig2=num mod 10
	prom=(dig1+dig2)*0.5
	//salida
	escribir "El promedio de ambas cifras es: ",prom, "."
FinProceso