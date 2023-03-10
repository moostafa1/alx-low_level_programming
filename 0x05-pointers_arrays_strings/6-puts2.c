#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character
 * @str: the character array (string)
 *
 * Return: none
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
