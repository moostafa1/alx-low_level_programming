#include "main.h"


/**
 * print_alphabet_x10 - prints all lowercase letters 10 times
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		char start = 'a';

		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
	}
}
