#include "calc.h"

/**
 * mod - returns the remainder of the division of a by b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a % b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
