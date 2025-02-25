Proceso Ejercicio2
	//declarar variables
	definir i,n,sn,num Como Entero
	definir promedio Como Real
	//entrada
	escribir "Ingresar la cantidad de números:";leer n
	//Proceso
	i=0
	sn=0
	mientras i<n Hacer
			i=i+1 //contador
			escribir "Ingresar número ",i,":";leer num
			sn=sn+num //acumulador
	FinMientras
	promedio=sn/n
	//salida
	escribir "La suma de los ",n," números es:",sn
	escribir "El promedio de los ",n," números es:",promedio
FinProceso
