Proceso EjercicioPropuesto2
	//declarar variables
	definir cant,cd,d Como Entero
	//entrada
	escribir "Ingresar cantidad:";leer cant
	//Proceso
	cd=0
	d=0
	mientras cant>0 Hacer
		d=cant mod 10
		cd=cd+1
		cant=trunc(cant/10)
	FinMientras
	//salida
	escribir "La cantidad de digitos es:",cd
FinProceso
