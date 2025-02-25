Proceso EjercicioPropuesto3
	//declarar variables
	definir opc Como Entero
	definir num Como Caracter
	//entrada
	escribir "Ingrese su número del [1-6]:"; leer opc
	segun opc hacer
		1:
			num="One"
		2:
			num="Two"
		3:
			num="Three"
		4:
			num="Four"
		5:
			num="Five"
		6:
			num="Six"
		De Otro Modo:
			num="no disponible"
	Fin segun
	//salida
	escribir "El número en inglés es: ",num "."
	
FinProceso
