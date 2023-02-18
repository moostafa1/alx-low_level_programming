#include <stdio.h>

/**
 * digits = prints digits from init to end
 * @init: the starting number
 * @end : the ending number
 *
 * Description: prints the digits lies between init and end
 *		(including both: init and end)
 */

void digits(int init, int end)
{
	for (; init < end; init++)
		putchar(init + '0');
}



/**
 * alphapet - prints the alphapet from init to end characters
 * @init : the starting character
 * @end  : the ending character
 *
 * Description: it prints the alphapet lies between init and end
 *		(including both: init and end)
 *
 * Example:
 *	alphapet('a', 'd') --> abcd
 */

void alphapet(char init, char end)
{
	for (; init <= end; init++)
		putchar(init);
}



/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	digits(0, 10);
	alphapet('a', 'f');
	putchar('\n');

	return (0);
}
