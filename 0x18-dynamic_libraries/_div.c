#include "calc.h"

/**
 * div - divide 1st number by 2nd one
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a / b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
