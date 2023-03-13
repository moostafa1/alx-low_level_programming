#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: the character array (string)
 *
 * Return: none
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
