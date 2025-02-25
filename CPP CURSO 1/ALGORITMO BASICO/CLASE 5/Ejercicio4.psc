Proceso Ejercicio4
	//declarar variables
	definir opc Como Entero
	definir estacion Como Caracter
	//entrada
	escribir "Ingrese su número del [1-12]:"; leer opc
	segun opc hacer
		1,2,3:
			estacion="Verano"
		4,5,6:
			estacion="Otoño"
		7,8,9:
			estacion="Invierno"
		10,11,12:
			estacion="Primavera"
		De Otro Modo:
			estacion="inexistente"
	Fin segun
	//salida
	escribir "La estación del año es: ",estacion "."
FinProceso
