#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: array to copy at
 * @src : array to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to the concatenated array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	for (; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}

	for (; k < n; k++)
	{
		dest[k] = '\0';
	}

	return (dest);
}
