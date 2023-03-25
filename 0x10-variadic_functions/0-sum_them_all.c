#include "variadic_functions.h"



/**
 * sum_them_all - sum of all its parameters
 * @n: parameter numbers
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;
	int next_num = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (; i < n; i++)
	{
		next_num = va_arg(args, int);
		sum += next_num;
	}
	va_end(args);
	return (sum);
}
