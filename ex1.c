#include <stdio.h>
/*include is a way to import the contents of a file into
this source file .h are header files which contain the functions
to be used in this program*/

/*This is a comment*/
int main(int argc, char const *argv[])/*la funcion debe retornar algo para estar completa
y recibe un entero con el numero de argumentos que va a recibir y un arreglo de caracteres
que contiene dichos argumentos*/
{
	/* code */
	int distance = 100;
	char *name = "Juan"; // char * se usa para declarar strings en c
	int age = 32;
	char *gender = "Male";
	int dogs =1;

	//this is also a comment

	printf("You are %d miles away.\n", distance);
	printf("Your name is %s\n", name);
	printf("You are %d years old\n", age);
	printf("You are a %s\n",gender);
	printf("You have %d dogs\n",dogs);
	return 0;
}