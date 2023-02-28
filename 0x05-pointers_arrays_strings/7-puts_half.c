#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @s: the character array (string)
 *
 * Return: none
 */
void puts_half(char *s)
{
	int i = 0;
	int h = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	if (i % 2)
	{
		h = (i / 2) + 1;
	}
	else
	{
		h = (i / 2);
	}

	for (; h <= i; h++)
	{
		_putchar(s[h]);
	}
}
