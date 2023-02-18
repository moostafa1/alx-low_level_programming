#include <stdio.h>

/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */


void alphapet(char init, char end);

int main(void)
{
	alphapet('a', 'z');
	alphapet('A', 'Z');
	putchar('\n');

	return (0);
}



/**
 * alphapet - prints the alphapet between two characters
 * @init : the starting char
 * @end  : the last char
 */

void alphapet(char init, char end)
{
	for (; init <= end; init++)
		putchar(init);
}
