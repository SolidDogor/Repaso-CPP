Proceso EjercicioPropuesto1
	//declarar variables
	definir opc Como Entero
	definir num Como Caracter
	//entrada
	escribir "Ingrese su número del [1-5]:"; leer opc
	segun opc hacer
		1:
			num="Uno"
		2:
			num="Dos"
		3:
			num="Tres"
		4:
			num="Cuatro"
		5:
			num="Cinco"
		De Otro Modo:
			num="no disponible"
	Fin segun
	//salida
	escribir "El número es: ",num "."
FinProceso
