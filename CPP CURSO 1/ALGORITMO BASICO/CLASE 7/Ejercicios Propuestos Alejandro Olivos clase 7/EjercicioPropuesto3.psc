Proceso EjercicioPropuesto3
	//declarar variables
	definir cant,cd,sd,d Como Entero
	//entrada
	escribir "Ingresar cantidad:";leer cant
	//Proceso
	cd=0
	sd=0
	d=0
	mientras cant>0 Hacer
		d=cant mod 10
		cd=cd+1
		sd=sd+d
		cant=trunc(cant/10)
	FinMientras
	//salida
	escribir "La suma de digitos es:",sd
FinProceso
