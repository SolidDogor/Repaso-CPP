Proceso Ejercicio4
	//declarar variables
	definir cs,b200,b100,res Como Entero
	//entrada
	escribir "Ingresar monto en soles:";leer cs
	//Proceso 
	b200=trunc(cs/200)
	res=cs mod 200
	b100=trunc(res/100)
	//salida
	escribir "Billetes de 200:",b200
	escribir "Billetes de 100:",b100
FinProceso
