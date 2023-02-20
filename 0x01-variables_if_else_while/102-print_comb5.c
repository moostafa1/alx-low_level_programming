#include <stdio.h>

/**
 * print - prints text
 * @i: first integer to print
 * @j: second integer to print
 */

void print(int i, int j)
{
	putchar(i + '0');
	putchar(j + '0');
}





/**
 * condition - prints text according to specific condition
 * @i : first integer to compare
 * @c1: compare i with it
 * @j : second integer to print
 * @c2: compare j with it
 */

void condition(int i, int c1, int j, int c2)
{
	if (i != c1 || j != c2)
	{
		putchar(',');
		putchar(' ');
	}
	else
	{
		putchar('\n');
	}
}




/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int max = 10;

	for (; i < max; i++)
	{
		int j = 0;

		for (; j < max - 1; j++)
		{
			int k = 0;

			for (; k < max; k++)
			{
				int l = 0;
				
				for (; l < max; l++)
				{
					if (i != k || j != l)
					{
						print(i, j);
						putchar(' ');
						print(k, l);
						condition(k, max-1, l, max-1);
					}
				}
			}
		}
	}
	
	return (0);
}
