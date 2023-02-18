#include <stdio.h>

/**
 * main - prints all possible combinations of a single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 10 - 1)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
