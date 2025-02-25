Proceso Ejercicio4
	//declarar variables
	definir cant,cd,sd,d Como Entero
	definir pd Como Real
	//entrada
	escribir "Ingresar cantidad:";leer cant
	//Proceso
	cd=0
	sd=0
	d=0
	mientras cant>0 Hacer
		d=cant mod 10 //digito de la cantidad(residuo)
		cd=cd+1 //contador
		sd=sd+d //acumulador
		cant=trunc(cant/10)
	FinMientras
	pd=sd/cd
	//salida
	escribir "La cantidad de digitos es:",cd
	escribir "La suma de digitos es:",sd
	escribir "El promedio de digitos es:",pd
FinProceso
