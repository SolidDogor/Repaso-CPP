Proceso EjercicioPropuesto4
	//declarar variables
	definir opc Como Entero
	definir periodo Como Caracter
	//entrada
	escribir "Ingrese su número [1,2,3,4,6,12]:"; leer opc
	segun opc hacer
		1:
			periodo="Mensual"
		2:
			periodo="Bimestral"
		3:
			periodo="Trimestral"
		4:
			periodo="Cuatrimestral"
		6:
			periodo="Semestral"
		12:
			periodo="Anual"
		De Otro Modo:
			periodo="inexistente"
	Fin segun
	//salida
	escribir "El periodo del año es: ",periodo "."
	
FinProceso
