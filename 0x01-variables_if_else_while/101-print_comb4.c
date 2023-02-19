#include <stdio.h>

/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k = 0;

	while (k < 8)
	{
		int i = 1;

		for (; i < 9; i++)
		{
			int j = 2;

			while (j < 10)
			{
				if (k < i && i < j)
				{
					putchar(k + '0');
					putchar(i + '0');
					putchar(j + '0');
					if (k != 7)
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						putchar('\n');
					}
				}
				j++;
			}
		}
		k++;
	}
	return (0);
}
