#include "main.h"


/**
 * set_bit - returns the value of a bit at a given index.
 * @n: number in decimal
 * @index: index of the bit we want to set its value to 1
 * Return: 1 if succeeded, else 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
 	if (!*n)
		return (-1);

	*n = (*n & ~(1l << index)) | (1l << index);
	return (1);
}
