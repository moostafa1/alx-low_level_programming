#include "main.h"

/**
 * rev_string -   prints a string, in reverse, followed by a new line
 * @s: the character array (string)
 *
 * Return: none
 */
void rev_string(char *s)
{
	int len = 0;
	int x = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (; x < len / 2; x++)
	{
		char swap = s[x];

		s[x] = s[len - x - 1];
		s[len - x - 1] = swap;
	}
}
