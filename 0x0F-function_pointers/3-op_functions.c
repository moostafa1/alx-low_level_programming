#include "3-calc.h"


/**
 * op_add - sums two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}



/**
 * op_sub - subtract 2nd number from 1st number
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}




/**
 * op_mul - multiply two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}





/**
 * op_div - divide 1st number by 2nd one
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}





/**
 * op_mod - returns the remainder of the division of a by b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
