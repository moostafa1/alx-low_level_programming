#include "main.h"
#include <math.h>

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

	h = ceil((float)i / 2);
	for (; h <= i; h++)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}