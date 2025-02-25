Proceso Pregunta2
	//declarar variables
	definir opc Como Entero
	definir numpal,numing,numrom Como Caracter
	//entrada
	escribir "Ingrese su número del [1-10]:"; leer opc
	segun opc hacer
		1:
			numpal="Uno"
			numing="One"
			numrom="I"
		2:
			numpal="Dos"
			numing="Two"
			numrom="II"
		3:
			numpal="Tres"
			numing="Three"
			numrom="III"
		4:
			numpal="Cuatro"
			numing="Four"
			numrom="IV"
		5:
			numpal="Cinco"
			numing="Five"
			numrom="V"
		6:
			numpal="Seis"
			numing="Six"
			numrom="VI"
		7:
			numpal="Siete"
			numing="Seven"
			numrom="VII"
		8:
			numpal="Ocho"
			numing="Eight"
			numrom="VIII"
		9:
			numpal="Nueve"
			numing="Nine"
			numrom="IX"
		10:
			numpal="Diez"
			numing="Ten"
			numrom="X"
		De Otro Modo:
			numpal="No disponible"
			numing="No disponible"
			numrom="No disponible"
	Fin segun
	//salida
	escribir "El numero escrito en palabras es: ",numpal "."
	escribir "El numero escrito en inglés es: ",numing "."
	escribir "El numero escrito en romano es: ",numrom "."
FinProceso
