Proceso Ejercicio2
	//declarar variables
	definir n1,n2,n3,p Como Real
	definir condici�n, alumno Como Caracter
	//entrada
	escribir "Ingresar nombre del alumno:";leer nombre
	escribir "Ingresar primera nota del alumno:";leer n1
	escribir "Ingresar segunda nota del alumno:";leer n2
	escribir "Ingresar tercera nota del alumno:";leer n3
	//Proceso
	p=(n1+n2+n3)/3
	si p>=14 Entonces
		condici�n="aprob�"
	SiNo
		condici�n="desaprob�"
	FinSi
	//salida
	escribir "El alumno ", nombre," ", condici�n, " con un promedio de:", p
FinProceso
