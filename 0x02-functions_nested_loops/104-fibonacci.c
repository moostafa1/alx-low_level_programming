#include <stdio.h>




/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{

	unsigned long fibo1 = 1;
	unsigned long fibo2 = 2;
	unsigned long normal_fibo = 0;
	int i = 1;

	for (; i < 99; i++)
	{
		if (i > 2)
		{
			normal_fibo = fibo1 + fibo2;
			fibo1 = fibo2;
			fibo2 = normal_fibo;
			printf("%lu", normal_fibo);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		else
		{
			printf("%d, ", i);
		}
	}
	putchar('\n');

	return (0);
}
