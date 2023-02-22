#include <unistd.h>
#include <string.h>


/**
 * _putchar - prints character
 * @c: the character we want to print
 *
 * Return: the inputed character 
 */
int _putchar(char c);




/**
 * print - prints the given string
 *
 * Return: void
 */

void print(char str[])
{
	int i = 0;

	for (; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
