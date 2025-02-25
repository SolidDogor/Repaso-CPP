Proceso Ejercicio1
	//1x2x3x4x5!
	//declarar variables
	definir n,f,i Como Entero
	//entrada
	escribir "Ingresar el número:";leer n
	//Proceso 
	i=0
	f=1
	Mientras i<n Hacer
		i=i+1 //contador
		f=f*i //acumulador de productos
	FinMientras
	//salida
	escribir "El factorial de ",n," es: ",f
FinProceso
