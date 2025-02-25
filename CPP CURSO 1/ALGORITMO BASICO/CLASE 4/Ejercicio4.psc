Proceso Ejercicio4
	//declarar variables
	definir s1,s2,s3,s4,s5,ts,ps,sma,sme Como Real
	//entrada
	escribir "Ingresar primer sueldo:";leer s1
	escribir "Ingresar segundo sueldo:";leer s2
	escribir "Ingresar tercer sueldo:";leer s3
	escribir "Ingresar cuarto sueldo:";leer s4
	escribir "Ingresar cuarto sueldo:";leer s5
	//Proceso
	ts=s1+s2+s3+s4+s5
	ps=(s1+s2+s3+s4+s5)/5
	sma=s1
	si s2>sma Entonces
		sma=s2
	FinSi
	si s3>sma Entonces
		sma=s3
	FinSi
	si s4>sma Entonces
		sma=s4
	FinSi
	si s5>sma Entonces
		sma=s5
	FinSi
	sme=s1
	si s2<sme Entonces
		sme=s2
	FinSi
	si s3<sme Entonces
		sme=s3
	FinSi
	si s4<sme Entonces
		sme=s4
	FinSi
	si s5<sme Entonces
		sme=s5
	FinSi
	//salida
	escribir "El total de sueldos es de:",ts
	escribir "El promedio de sueldos es de:",ps
	escribir "El mayor sueldo es:",sma
	escribir "El menor sueldo es:",sme
FinProceso
