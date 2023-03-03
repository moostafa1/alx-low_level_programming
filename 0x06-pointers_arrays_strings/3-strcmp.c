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

	while (s1[len_s1] != '\0')
	{
		if (s1[len_s1] == s2[len_s1])
		{}
		else
		{
			return (s1[len_s1] - s2[len_s1]);
		}
		len_s1++;
	}

	return (0);
}
