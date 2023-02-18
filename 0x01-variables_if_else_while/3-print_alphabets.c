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
 * alphapet - prints the alphapet from init to end characters
 * @init : First operand
 * @end  : Second operand
 *
 * Description:
 *	@init: the starting character
 *	@end : the ending character
 *
 *
 * Example:
 *	alphapet('a', 'd') --> abcd
 */

void alphapet(char init, char end)
{
	for (; init <= end; init++)
		putchar(init);
}
