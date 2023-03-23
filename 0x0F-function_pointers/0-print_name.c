#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function we are using to print the name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
