Proceso Ejercicio3
	//declarar variables
	definir v1,v2,v3,tv,pv,vma,vme Como Real
	definir nombre Como Caracter
	//entrada
	escribir "Ingresar nombre del vendedor:";leer nombre
	escribir "Ingresar primera venta:";leer v1
	escribir "Ingresar segunda venta:";leer v2
	escribir "Ingresar tercera venta:";leer v3
	//Proceso
	tv=v1+v2+v3
	pv=(v1+v2+v3)/3
	vma=0
	si v1>vma Entonces
		vma=v1
	FinSi
	si v2>vma Entonces
		vma=v2
	FinSi
	si v3>vma Entonces
		vma=v3
	FinSi
	vme=99999
	si v1<vme Entonces
		vme=v1
	FinSi
	si v2<vme Entonces
		vme=v2
	FinSi
	si v3<vme Entonces
		vme=v3
	FinSi
	//salida
	escribir "El total de ventas es de:",tv
	escribir "El promedio de ventas es de:",pv
	escribir "La mayor venta es:",vma
	escribir "La menor venta es:",vme
FinProceso
