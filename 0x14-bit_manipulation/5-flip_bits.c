#include "main.h"




/**
 * clear_bit - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: 1st number in decimal
 * @m: 2nd number in decimal
 * Return: new value of given bit index.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x_or = n ^ m;
	unsigned int bit = sizeof(x_or) * 8;
	unsigned int counter = 0;

	while (bit)
	{
		if (x_or & 1l << --bit)
		{
			counter ++;
		}
	}

	return (counter);
}
