Proceso EjercicioPropuesto2
	//declarar variables
	definir opc Como Entero
	definir num Como Caracter
	//entrada
	escribir "Ingrese su número del [1-10]:"; leer opc
	segun opc hacer
		1:
			num="I"
		2:
			num="II"
		3:
			num="III"
		4:
			num="IV"
		5:
			num="V"
		6:
			num="VI"
		7:
			num="VII"
		8:
			num="VIII"
		9:
			num="IX"
		10:
			num="X"
		De Otro Modo:
			num="No disponible"
	Fin segun
	//salida
	escribir "El numero escrito en romano es: ",num "."
FinProceso
