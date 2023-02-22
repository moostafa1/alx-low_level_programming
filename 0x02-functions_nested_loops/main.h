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
