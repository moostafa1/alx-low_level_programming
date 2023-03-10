#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: 1st array to concatenate
 * @src: 2nd array to concatenate
 *
 * Return: pointer to the concatenated array
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}


	for (; src[k] != '\0'; k++)
	{
		dest[j] = src[k];
		j++;
	}

	return (dest);
}
