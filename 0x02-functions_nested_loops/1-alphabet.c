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
		_puthar(start);
		start++;
	}
}



/**
 * main - prints text
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}
