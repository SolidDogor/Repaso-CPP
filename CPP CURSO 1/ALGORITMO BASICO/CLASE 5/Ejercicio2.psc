Proceso Ejercicio2
	//declarar variables
	definir opc Como Entero
	definir dia Como Caracter
	//entrada
	escribir "Ingrese su numero del [1-7]:"; leer opc
	segun opc hacer
		1:
			dia="Lunes"
		2:
			dia="Martes"
		3:
			dia="Miercoles"
		4:
			dia="Jueves"
		5:
			dia="Viernes"
		6:
			dia="Sabado"
		7:
			dia="Domingo"
		De Otro Modo:
			dia="inexistente"
	Fin segun
	//salida
	escribir "El dia de la semana es: ",dia "."
FinProceso
