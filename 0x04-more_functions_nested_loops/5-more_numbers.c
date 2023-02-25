#include "main.h"
#include <math.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: none
 */
void more_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 0;

		for (; j <= 14; j++)
		{

			if (j >= 10)
			{
				_putchar(ceil(j / 10) + '0');
			}
			_putchar(j % 10 + '0');

			if (j == 14 && i != 9)
			{
				_putchar('\n');
			}
		}

	}
}
