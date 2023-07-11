#include "main.h"



/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number in decimal
 * @index: index of the bit we want to set its value to 0
 * Return: new value of given bit index.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n = ((*n & ~(1 << index)) | (0 << index));
	return (1);
}
