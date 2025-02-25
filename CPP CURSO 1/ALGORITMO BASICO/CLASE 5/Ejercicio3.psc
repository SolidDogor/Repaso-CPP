Proceso Ejercicio3
	//declarar variables
	definir opc Como Entero
	definir mes Como Caracter
	//entrada
	escribir "Ingrese su numero del [1-12]:"; leer opc
	segun opc hacer
		1:
			mes="Enero"
		2:
			mes="Febrero"
		3:
			mes="Marzo"
		4:
			mes="Abril"
		5:
			mes="Mayo"
		6:
			mes="Junio"
		7:
			mes="Julio"
		8:
			mes="Agosto"
		9:
			mes="Septiembre"
		10:
			mes="Octubre"
		11:
			mes="Noviembre"
		12:
			mes="Diciembre"
		De Otro Modo:
			mes="inexistente"
	Fin segun
	//salida
	escribir "El mes es: ",mes "."
FinProceso
