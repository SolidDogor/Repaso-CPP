Proceso Ejercicio1
	//declar variables
	definir i,n,num,may Como Entero
	//entrada
	escribir "Ingresar los n números:";leer n
	//Proceso 
	may=0
	i=0
	para i=1 hasta n Con Paso 1 Hacer
		escribir "Ingresar número ",i,":";leer num
		si num>may Entonces
			may=num
		FinSi
	FinPara
	//salida
	escribir "El número mayor es: ",may
FinProceso
