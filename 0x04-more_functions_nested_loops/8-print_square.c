#include "main.h"

/**
 * print_square - prints a square
 * @n: number of times the character # should be printed
 *
 * Return: none
 */
void print_square(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			int j = 0;

			for (; j < n ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
