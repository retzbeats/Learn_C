#include <stdio.h> //includes standard input/output functions one of those is printf

int main()
{
	int age = 10; //variable set to 10
	int height = 72;

	printf("I am %d years old.\012", age); //format string %d is replaced by the variable: age
	printf("I am %d inches tall.\n", height);// the variable is replaced into the format string by printf

	/*Se le entregan unas variable a printf para que construya un nuevo string y lo imprima en la terminal*/
	return 0;
}

/*Escape sequence
\a Alert---no veo que haga nada
\b Backspace---borra lo que este en el espacio anterior
\f Formfeed---pone lo siguiente en el renglon de abajo separado por 1 tab
\n Newline---pone lo siguiente en el renglon de abajo
\r Carriage return---pasa al siguiente renglon pero borra lo que deberia ir en ese renglon (enter?)
\t Horizontal Tab---separa por un tab
\v Vertical Tab---hace lo mismo que Formfeed
\\ Backslash---coloca un backslash
\' Single quotation
\" Double quotation
\? Question mark
\nnn The byte whose numerical value is given by nnn interpreted as an octal number---se reemplaza el numero por el caracter ASCII correspondiente,
los numeros en octal hay que escribirlos con 0 pej: 012
\xhh... The byte whose numerical value is given by hh… interpreted as a hexadecimal number---se reemplaza el numero por el caracter ASCII correspondiente
PARA LOS FORMAT SEQUENCE VER: http://www.cprogramming.com/tutorial/printf-format-strings.html */