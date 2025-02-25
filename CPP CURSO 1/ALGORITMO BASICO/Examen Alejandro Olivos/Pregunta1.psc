Proceso Pregunta1
	//declarar variables
	definir ing,alq,com,mov,ves,salactual Como Entero
	definir tdc,saldolares Como Real
	definir nombre Como Caracter
	//entrada
	escribir "Ingresar el nombre de la persona:";leer nombre
	escribir "Ingresar los ingresos de ",nombre,":";leer ing
	escribir "Ingresar el gasto en alquiler de ",nombre,":";leer alq
	escribir "Ingresar el gasto en comida de ",nombre,":";leer com
	escribir "Ingresar el gasto en movilidad de ",nombre,":";leer mov
	escribir "Ingresar el gasto en vestimenta de ",nombre,":";leer ves
	escribir "Ingresar el tipo de cambio:";leer tdc
	//Proceso
	salactual=ing-(alq+mov+com+ves)
	saldolares=salactual/tdc
	//salida
	escribir "El saldo actual de ", nombre," es: ",salactual
	escribir "El saldo actual de ", nombre," en dólares es: ",saldolares
	
FinProceso
