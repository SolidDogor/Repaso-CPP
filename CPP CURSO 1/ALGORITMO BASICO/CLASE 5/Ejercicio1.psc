Proceso Ejercicio1
	//declarar variables
    definir opc Como Entero
	definir num1,num2 Como Entero
	definir r Como Reales
	definir operacion Como Caracter
	//entrada
	escribir "Ingrese su primer numero:"; leer num1
	escribir "Ingrese su segundo numero:"; leer num2
	escribir "Ingresar opción[1,2,3,4]:";leer opc
	segun opc hacer
		1:
			r=num1+num2
			operacion="Suma"
		2:
			r=num1-num2
			operacion="Resta"
		3:
			r=num1*num2
			operacion="Multiplicacion"
		4:
			r=num1/num2
			operacion="Division"
		De Otro Modo:
			operacion="invalida"
	Fin segun
	//salida
	escribir "La operacion es: ",operacion "."
    escribir "El resultado es: ",r "."
	
FinProceso
