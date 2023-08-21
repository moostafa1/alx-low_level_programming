#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: the character array (string)
 *
 * Return: none
 */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0';)
		i++;
	return (i);
}
