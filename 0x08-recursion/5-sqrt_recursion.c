#include "main.h"

/**
 * _sqrt_recursion_2 -  returns the natural square root of a number
 * @n: number to get its square root
 * @y: base of the root
 *
 * Return: square root of n
 */

int _sqrt_recursion_2(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	if (y <= 0)
	{
		return (-1);
	}
	if (y > 10000000)
	{
		y = y / 1000;
	}

	return (_sqrt_recursion_2(n, y - 1));
}


/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: base to get its square root
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_2(n, n));
}
