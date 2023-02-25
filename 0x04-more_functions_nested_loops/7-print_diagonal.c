#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: none
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i <= n; i++)
		{
			int j = 0;

			for (; j <=n ; j++)
			{
				if (i == j)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
