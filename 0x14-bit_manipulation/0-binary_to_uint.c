#include "main.h"



/**
 * power_n - returns the power of the given number
 * @num: number to get powered
 * @power: power of the number
 *
 * Return: powered number.
 */
unsigned int power_n(unsigned int num, unsigned int power)
{
	unsigned int powered_num = 1;

	for (unsigned int i = 0; i < power; i++)
	{
		powered_num *= num;
	}
	return (powered_num);
}





/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: decimal number from given binary
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int power = strlen(b) - 1;
	unsigned int decimal = 0;

	for (unsigned int i = 0; i < power; i++)
	{
		if (*(b + i) != 48 && *(b + i) != 49)
			return (0);

		if (*(b + i) == 49)
		{
			decimal += power_n(2, power - i);
		}
	}
	return (decimal);
}
