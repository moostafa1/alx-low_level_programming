#include <stdio.h>

/**
 * print_sign - prints the sign of an integer (+ve or -ve)
 * @n: input integer to get its sign
 *
 * Return: 1 if +ve, 0 if zero, -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(1 + '0');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(n + '0');
		return (0);
	}
	_putchar('-');
	_putchar(1 + '0');
	return (-1);
}
