#include <stdio.h>

/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (; i < 9; i++)
	{
		int j = 1;
		while (j < 10)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
	}
	return (0);
}
