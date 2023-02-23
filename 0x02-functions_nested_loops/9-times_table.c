#include "main.h"

/**
 * times_table - prints  the 9 times table, starting with 0
 *
 * Return: none
 */

void times_table(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 0;

		for (; j < 10; j++)
		{
			int x = i * j;

			if (x < 10)
			{
				_putchar(x + '0');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}

			if (j < 9)
			{
				_putchar(',');
			}

			if (((j + 1) * i) < 10 && j < 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
