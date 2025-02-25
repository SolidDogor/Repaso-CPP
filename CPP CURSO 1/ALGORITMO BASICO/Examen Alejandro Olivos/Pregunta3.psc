Proceso Pregunta3
	//declarar variables
	definir i,n,edad,totale,emayor,emenor Como Entero
	definir pedad Como Real
	//entrada
	escribir "Ingresar la cantidad de alumnos:";leer n
	//Proceso
	i=0
	emayor=0
	emenor=99999
	totale=0
	mientras i<n Hacer
		i=i+1
		escribir "Ingrese la edad del alumno número ",i,":";leer edad
		totale=totale+edad
		si edad>emayor Entonces
			emayor=edad
		FinSi
		si edad<emenor Entonces
			emenor=edad
		FinSi
	FinMientras
	pedad=totale/n
	//salida
	escribir "El mayor alumno tiene:",emayor," años."
	escribir "El menor alumno tiene:",emenor," años."
	escribir "El promedio de edad de los ",n," alumnos es:",pedad
FinProceso
