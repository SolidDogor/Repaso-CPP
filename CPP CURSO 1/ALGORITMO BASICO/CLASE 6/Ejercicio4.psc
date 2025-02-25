Proceso Ejercicio4
	//declarar variables
	definir i,ne Como Entero
	definir sp,ts,sueldo Como Real
	//entrada
	escribir "Ingresar cantidad de empleados:";leer ne
	//Proceso
	ts=0.0
	para i=1 hasta ne con paso 1 Hacer
		escribir"Ingresar sueldo de empleado número: ";leer sueldo
		ts=ts+sueldo //acumulador
	FinPara
	sp=ts/ne;
	//salida
	escribir"El promedio de sueldos de los ",n," empleados es:",sp
FinProceso
