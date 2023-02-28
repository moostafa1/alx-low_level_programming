#include "main.h"

/**
 * print_rev -   prints a string, in reverse, followed by a new line
 * @s: the character array (string)
 *
 * Return: none
 */
void print_rev(char *s)
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
