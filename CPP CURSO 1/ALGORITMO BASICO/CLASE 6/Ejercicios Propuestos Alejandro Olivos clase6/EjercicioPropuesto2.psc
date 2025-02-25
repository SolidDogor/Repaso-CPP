Proceso EjercicioPropuesto2
	//declar variables
	definir i,n,edad,tedad,camay,camen Como Entero
	definir pedad Como real
	//entrada
	escribir "Ingresar la cantidad n de personas:";leer n
	//Proceso 
	tedad=0
	i=0
	para i=1 hasta n Con Paso 1 Hacer
		escribir "Ingresar la edad de la persona ",i,":";leer edad
		si edad>=18 Entonces
			camay=camay+1
		Sino
			camen=camen+1
		FinSi
		tedad=tedad+edad
	FinPara
	pedad=tedad/n
	//salida
	escribir "El promedio de edad es: ",pedad
	escribir "La cantidad de menores es: ",camen
	escribir "La cantidad de mayores es: ",camay
FinProceso
