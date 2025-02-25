Proceso EjercicioPropuesto3
	//declarar variables
	definir p1,p2,p3,pe,pma Como Real
	//entrada
	escribir "Ingresar edad de la primera persona:";leer p1
	escribir "Ingresar edad de la segunda persona:";leer p2
	escribir "Ingresar edad de la tercera persona:";leer p3
	//Proceso
	pe=(p1+p2+p3)/3
	pma=p1
	si p2>pma Entonces
		pma=p2
	FinSi
	si p3>pma Entonces
		pma=p3
	FinSi
	//salida
	escribir "El promedio de las edades es de:",pe
	escribir "La persona mayor tiene:",pma, " años."
	
FinProceso
