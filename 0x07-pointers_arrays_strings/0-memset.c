#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: array (memory area to fill)
 * @b: constant value to fill with
 * @n: number of bytes to fill with s
 *
 * Return: the inputed character
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < (int)n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
