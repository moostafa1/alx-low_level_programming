#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number in decimal
 * @index: index of the bit we want to get its value
 * Return: value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (n & 1l << index)
	{
		return (1);
	}
	else if (!(n & 1l << index))
	{
		return (0);
	}
	return (-1);
}
