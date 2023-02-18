#include <stdio.h>

/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	alphapet('a', 'z');
	alphapet('A', 'Z');
	putchar('\n');

	return (0);
}


void alphapet(char init, char end)
{
	for (; init <= end; init++)
		putchar(init);
}
