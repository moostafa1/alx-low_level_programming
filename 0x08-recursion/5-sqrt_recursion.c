#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: base to get its square root
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int sqrt = 0;

	for (int i = 1; i <= n; i += 2)
	{
		n = n - i;
		sqrt++;
		if (n == 0)
		{
			return (sqrt);
		}
	}
	return (-1);
}
