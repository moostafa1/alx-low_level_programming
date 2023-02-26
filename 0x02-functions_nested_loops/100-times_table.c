#include "main.h"

/**
 * condition_1 - checks condition to print the n times table
 * @x: value to check condition on it
 *
 * Return: none
 */
void condition_1(int x)
{
	if (x >= 100)
	{
		_putchar((x / 100) + '0');
		_putchar(((x / 10) % 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if (x >= 10)
	{
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	else
	{
		_putchar(x + '0');
	}
}




/**
 * condition_2 - checks condition to print the n times table
 * @i: value to get another value for condition checking
 * @j: value to check condition on it
 * @n: value to check condition on it
 *
 * Return: none
 */
void condition_2(int i, int j, int n)
{
	int x_next = i * (j + 1);
	char space = ' ';

	if (j < n)
	{
		_putchar(',');

		if (x_next >= 10 && x_next < 100)
		{
			_putchar(space);
		}
		else if (x_next < 10)
		{
			_putchar(space);
			_putchar(space);
		}
		_putchar(space);
	}
}


/**
 * print_times_table - prints  the n times table, starting with 0
 * @n: max. value for our table (ex: 5 x 5)
 *
 * Return: none
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i = 0;

		for (; i <= n; i++)
		{
			int j = 0;

			for (; j <= n; j++)
			{
				int x = i * j;

				condition_1(x);
				condition_2(i, j, n);
			}
			_putchar('\n');
		}
	}
}
