Proceso EjercicioPropuesto1
	//declar variables
	definir i,n,num,canhom,canmuj Como Entero
	definir sexo Como Caracter
	//entrada
	escribir "Ingresar la cantidad n de personas:";leer n
	//Proceso 	
	canhom=0 //contador
	canmuj=0 //contador
	para i=1 hasta n Con Paso 1 Hacer
		escribir "Ingresar sexo (h o m) de la persona número: ",i,":";leer sexo
		si sexo="h" Entonces
			canhom=canhom+1
		Sino
			canmuj=canmuj+1
		FinSi
	FinPara
	//salida
	escribir "La cantidad de hombres es: ",canhom
	escribir "La cantidad de mujeres es: ",canmuj
FinProceso
