#include <stdio.h>


/**
 * digits - ptints digits from init to end
 * @init: the starting number
 * @end : the ending number
 */

void digits(int init, int end)
{
	for (; init < end; init++)
		putchar(init + '0');
}


/**
 * main - pints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	digits(0, 10);
	putchar('\n');

	return (0);
}
