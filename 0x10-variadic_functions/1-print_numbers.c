#include "variadic_functions.h"


/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	int next_num = 0;

	va_start(args, n);

	for (; i < n; i++)
	{
		next_num = va_arg(args, int);
		printf("%d", next_num);
		if (i < n - 1)
		{
			putchar(*separator);	
			putchar(' ');
		}
	}
	putchar('\n');
}
