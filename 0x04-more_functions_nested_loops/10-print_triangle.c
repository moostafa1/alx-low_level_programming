#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: determines the size (length and base) of triangle
 *
 * Return: none
 */
void print_triangle(int size)
{
	int i = 0;

	if (size > 0)
	{
		for (; i <= size; i++)
		{
			int j = 0;

			for (; j < size; j++)
			{
				if (i + j >= size)
				{
					_putchar('#');
				}
				else if (i != 0)
				{
					_putchar(' ');
				}
			}
			if (i != size)
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
