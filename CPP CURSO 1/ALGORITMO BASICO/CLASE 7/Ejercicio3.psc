Proceso Ejercicio3
	//declarar variables
	definir cant,ci,d Como Entero
	//entrada
	escribir "Ingresar cantidad:";leer cant
	//Proceso
	ci=0
	mientras cant>0 Hacer
		d=cant mod 10 //digito de la cantidad(residuo)
		ci=(ci*10)+d
		cant=trunc(cant/10)
	FinMientras
	//salida
	escribir "La cantidad invertida es:",ci
FinProceso
