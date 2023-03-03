#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st array of characters (string)
 * @s2: 2nd array of characters (string)
 *
 * Return: pointer to the concatenated array
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	if (len_s1 < len_s2)
	{
		return (-15);
	}
	else if (len_s1 > len_s2)
	{
		return (15);
	}
	return (0);
}
