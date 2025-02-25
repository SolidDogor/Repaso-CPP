Proceso Ejercicio1
	//declarar variables
	definir cant,d,r,cpar,cimp Como Entero
	//entrada
	escribir "Ingresar cantidad:";leer cant
	//Proceso
	d=0
	cpar=0
	cimp=0
	mientras cant>0 Hacer
		d=cant mod 10
		r=d mod 2
		si r=0 Entonces
			cpar=cpar+1
		SiNo
			cimp=cimp+1
		FinSi
		cant=trunc(cant/10)
	FinMientras
	//salida
	escribir "La cantidad de digitos pares es:",cpar
	escribir "La cantidad de digitos impares es:",cimp
FinProceso
