#include "main.h"

/**
 * print_alphabet - prints all lowercase letters
 *
 * Return: none
 */
void print_alphabet(void)
{
	char start = 'a';
	
	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
