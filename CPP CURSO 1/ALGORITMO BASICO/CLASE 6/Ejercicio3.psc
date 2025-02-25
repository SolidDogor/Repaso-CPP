Proceso Ejercicio3
	//declar variables
	definir i,n,sp,ci,r Como Entero
	//entrada
	escribir "Ingresar n números:";leer n
	//Proceso 
	sp=0 //acumulador
	ci=0 //contador
	para i=1 hasta n Con Paso 1 Hacer
		escribir "Número ",i
		r=i mod 2
		si r=0 Entonces
			sp=sp+i
		Sino
			ci=ci+1
		FinSi
	FinPara
	//salida
	escribir "La suma de los ",n," números pares es:",sp
	escribir "La cantidad de los ",n," números impares es:",ci
FinProceso

