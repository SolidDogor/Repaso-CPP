Proceso Ejercicio2
	//declarar variables
	definir empleado, producto Como Caracter
	definir tarifa, sb, desc, sn Como Real
	definir horast Como Entero
	//entrada
	escribir "Ingrese su nombre:"; leer empleado
	escribir "Ingrese sus horas trabajadas:"; leer horast
	escribir "Ingrese la tarifa por hora:"; leer tarifa
	//Proceso 
	sb=horast*tarifa
	desc=sb*0.13
	sn=sb-desc
	//salida
	escribir "El sueldo bruto es: ",sb, "."
	escribir "El descuento es: ", desc, "."
	escribir "El sueldo neto es: ", sn, "."	
	
FinProceso
