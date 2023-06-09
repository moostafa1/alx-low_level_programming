#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: array to copy in
 * @src: array to copy from
 * @n: number of bytes to fill with s
 *
 * Return: the inputed character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < (int)n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
