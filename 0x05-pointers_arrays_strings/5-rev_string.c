#include "main.h"

/**
 * rev_string -   prints a string, in reverse, followed by a new line
 * @s: the character array (string)
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i >= 0; i--)
	{

		if (s[i] == '\0')
		{
			continue;
		}
		_putchar(s[i]);
	}
	_putchar('\n');
}
