Proceso Pregunta4
	//declarar variables
	definir cant,d,r,cpar,simp Como Entero
	//entrada
	escribir "Ingresar cantidad:";leer cant
	//Proceso
	d=0
	cpar=0
	simp=0
	mientras cant>0 Hacer
		d=cant mod 10
		r=d mod 2
		si r=0 Entonces
			cpar=cpar+1
		FinSi
		si r<>0 Entonces
			simp=simp+d
		FinSi
		cant=trunc(cant/10)
	FinMientras
	//salida
	escribir "La cantidad de digitos pares es:",cpar
	escribir "La suma de digitos impares es:",simp
FinProceso
