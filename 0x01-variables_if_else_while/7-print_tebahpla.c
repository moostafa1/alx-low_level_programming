#include <stdio.h>



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

void alphapet(char init, char end);



/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	alphapet('z', 'a');
	putchar('\n');

	return (0);
}



/**
 * alphapet - prints the alphapet from init to end characters
 * @init : the starting character
 * @end  : the ending character
 *
 */

void alphapet(char init, char end)
{
	for (; init >= end; init--)
		putchar(init);
}
