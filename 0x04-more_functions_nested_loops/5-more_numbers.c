#include "main.h"

/**
 * _putit - prints the character given
 * @i: character to print
 *
 * Return: none
 */
_putit(char i)
{
	_putchar(i);
}




/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
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
			if (j > 9)
			{
				_putit(j / 10 + '0');
				_putit(j % 10 + '0');
			}
			else
			{
				_putit(j + '0');
			}
			if (j == 14 && i != 9)
			{
				_putit('\n');
			}
		}

	}
}
