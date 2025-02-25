Proceso EjercicioP4
	//declarar variables
	definir ms, b100, b200, residuo Como Entero
	//entrada
	escribir "Ingrese su monto en soles:"; leer ms
	//Proceso 
	b200=trunc(ms/200)
	residuo=ms-(b200*200)
	b100=trunc(residuo/100)
	escribir "El monto en soles en billetes de 200 es:", b200 "."
	escribir "El monto en soles en billetes de 100 es:", b100 "."
FinProceso