#include <unistd.h>


/**
 * _putchar - prints character
 * @c: the character we want to print
 *
 * Return: the inputed character 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}




/**
 * print - prints the given string
 *
 * Return: void
 */

void print(char str[], int len)
{
	int i = 0;

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
}
