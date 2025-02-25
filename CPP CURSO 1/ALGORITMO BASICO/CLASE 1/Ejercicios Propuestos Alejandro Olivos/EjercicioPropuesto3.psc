Proceso EjercicioP3
	//definir variables
	Definir sueldo, v1, v2, v3, tc, comision, pts, ptd Como Real
	Definir empleado Como Caracter
	//entrada de datos
	Escribir "Ingrese nombre del empleado:"; leer empleado
	Escribir "Ingrese su sueldo:"; leer sueldo
	Escribir "Ingrese el monto de su primera venta:"; leer v1
	Escribir "Ingrese el monto de su segunda venta:"; leer v2
	Escribir "Ingrese el monto de su tercera venta:"; leer v3
	Escribir "Ingrese tasa de cambio:"; leer tc
	//Proceso 
	comision=(v1+v2+v3)*0.1
	pts=sueldo+comision
	ptd=pts/tc
	//salida
	Escribir "El pago total del empleado ",empleado," es: S/" pts " y $" ptd " ."
FinProceso
