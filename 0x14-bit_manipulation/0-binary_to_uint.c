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
	unsigned int powered_num = 1, i = 0;

	for (; i < power; i++)
	{
		powered_num *= num;
	}
	return (powered_num);
}




/**
 * _strlen - gets the length of the string
 * @b: input string
 *
 * Return: length of b
 */
unsigned int _strlen(const char *b)
{
	unsigned int len = 0;

	if (b == NULL)
		return (0);
	while (*b++)
		len++;
	return (len);
}




/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: decimal number from given binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = _strlen(b) - 1;
	unsigned int decimal = 0, i = 0;

	if (b == NULL)
		return (0);

	for (; i < _strlen(b); i++)
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
