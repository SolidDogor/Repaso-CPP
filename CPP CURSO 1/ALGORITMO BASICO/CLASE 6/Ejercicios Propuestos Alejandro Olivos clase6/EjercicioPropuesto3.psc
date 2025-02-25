Proceso EjercicioPropuesto3
	//declar variables
	definir i,n Como Entero
	definir ventas,tventas,vmen Como real
	//entrada
	escribir "Ingresar la cantidad total de ventas:";leer n
	//Proceso 
	vmen=99999.9
	tventas=0.0
	i=0
	para i=1 hasta n Con Paso 1 Hacer
		escribir "Ingresar la venta número ",i,":";leer ventas
		si ventas<vmen Entonces
			vmen=ventas
		FinSi
		tventas=tventas+ventas
	FinPara
	//salida
	escribir "La cantidad total de ventas es de: ",tventas
	escribir "La menor venta es de: ",vmen
FinProceso
