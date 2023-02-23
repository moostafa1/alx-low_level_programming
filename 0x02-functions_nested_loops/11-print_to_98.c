#include <stdio.h>

/**
 * print - prints text according to condition
 * @n: 1st number
 * @comp: 2nd number
 *
 * Return: none
 */

void print(int n, int comp)
{
	if (n != comp)
	{
		printf("%d, ", n);
	}
	else
	{
		printf("%d", n);
	}
}



/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Return: none
 */

void print_to_98(int n)
{
	int limit = 98;

	if (n < limit)
	{
		for (; n <= limit; n++)
		{
			print(n, limit);
		}
	}
	else if (n > limit)
	{
		for (; n > 97; n--)
		{
			print(n, limit);
		}
	}
	else
	{
		printf("%d", limit);
	}
	putchar('\n');
}
