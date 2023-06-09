#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: 1st array to concatenate
 * @src: 2nd array to concatenate
 * @n: number of bytes to concatenate
 *
 * Return: pointer to the concatenated array
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	for (; k < n && src[k] != '\0'; k++)
	{
		dest[j] = src[k];
		j++;
	}
	return (dest);
}
