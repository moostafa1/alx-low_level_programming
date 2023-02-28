#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
