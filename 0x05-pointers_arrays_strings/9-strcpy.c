#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: the copied list
 * @src: original list
 *
 * Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	do	{
		i++;
	}	while (src[i] != '\0');



	for (; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
