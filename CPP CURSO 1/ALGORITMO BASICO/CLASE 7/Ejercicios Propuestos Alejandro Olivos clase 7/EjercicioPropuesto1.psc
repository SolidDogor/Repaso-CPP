Proceso EjercicioPropuesto1
	//declarar variables
	definir i,n,edad,totale,cantm Como Entero
	definir pedad Como Real
	definir sexo Como Caracter
	//entrada
	escribir "Ingresar la cantidad de personas:";leer n
	//Proceso
	cantm=0
	i=0
	totale=0
	mientras i<n Hacer
		i=i+1
		escribir "Ingrese el sexo (m ó f) de la persona ",i,":";leer sexo
		si sexo="m"
			cantm=cantm+1
		FinSi
		escribir "Ingresar edad de la persona ",i,":";leer edad
		totale=totale+edad
	FinMientras
	pedad=totale/n
	//salida
	escribir "La cantidad de hombres es:",cantm
	escribir "El promedio de edad de las ",n," personas es:",pedad
FinProceso
