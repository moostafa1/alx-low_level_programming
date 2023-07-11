#include "main.h"



/**
 * print_binary - prints the binary representation of a number.
 * @n: number to get binary equivalent
 *
 * Return: powered number.
 */
void print_binary(unsigned long int n)
{
	unsigned int bit = sizeof(n) * 8;
	bool print_it = false;

	while (bit)
	{
		if (n & 1l << --bit)
		{
			_putchar(49);
			print_it = true;
		}
		else if (print_it)
		{
			_putchar(48);
		}
	}
	/* to print the case of n = 0 */
	if (!print_it)
		_putchar(48);
}
