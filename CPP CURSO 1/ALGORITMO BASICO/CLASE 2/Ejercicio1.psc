Proceso Ejercicio1
	//declarar variables
	definir dni, nombre, producto Como Caracter
	definir precio, st, igv, tps, tpd, tc  Como Real
	definir cantidad Como Entero
	//entrada
	escribir "Ingrese su DNI:"; leer dni
	escribir "Ingrese su nombre:"; leer nombre
	escribir "Ingrese el producto:"; leer producto
	escribir "Ingrese el precio:"; leer precio
	escribir "Ingrese la cantidad:"; leer cantidad
	escribir "Ingrese tipo de cambio:"; leer tc
	//Proceso 
	st=precio*cantidad
	igv=st*0.18
	tps=st+igv
	tpd=tps/tc
	//salida
	escribir "El subtotal es: ",st, "."
	escribir "El total en soles es: ", tps, "."
	escribir "El total en dólares es: ", tpd, "."	
	
FinProceso
