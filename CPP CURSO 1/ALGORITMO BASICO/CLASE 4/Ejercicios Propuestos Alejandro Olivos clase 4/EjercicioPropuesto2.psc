Proceso EjercicioPropuesto2
	//declarar variables
	definir c1,c2,c3,c4,tc,pc,cma,cme Como Real
	definir nombre Como Caracter
	//entrada
	escribir "Ingresar nombre del cliente:";leer nombre
	escribir "Ingresar primera compra:";leer c1
	escribir "Ingresar segunda compra:";leer c2
	escribir "Ingresar tercera compra:";leer c3
	escribir "Ingresar cuarta compra:";leer c4
	//Proceso
	tc=c1+c2+c3+c4
	pc=(c1+c2+c3+c4)/4
	cma=c1
	si c2>cma Entonces
		cma=c2
	FinSi
	si c3>cma Entonces
		cma=c3
	FinSi
	si c4>cma Entonces
		cma=c4
	FinSi
	cme=c1
	si c2<cme Entonces
		cme=c2
	FinSi
	si c3<cme Entonces
		cme=c3
	FinSi
	si c4<cme Entonces
		cme=c4
	FinSi
	//salida
	escribir "A continuacion se muestran datos sobre las compras de ", nombre
	escribir "El total de compras es de:",tc
	escribir "El promedio de compras es de:",pc
	escribir "La mayor compra es:",cma
	escribir "La menor compra es:",cme
	
FinProceso
