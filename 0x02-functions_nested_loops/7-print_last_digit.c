#include "main.h"

/**
 * _abs - prints the absolute value of integer
 * @i: input integer to get its sign
 *
 * Return: 1 if +ve, 0 if zero, -1 if -ve
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	return (i);
}



/**
 * print_last_digit - prints the last digit of an integer)
 * @i: input integer to get its last digit
 *
 * Return: last digit (0:9)
 */

int print_last_digit(int i)
{
	int x = 0;

	x = _abs(i) % 10;
	_putchar(x + '0');
	return (x);
}
