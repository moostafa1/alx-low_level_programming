#include <stdio.h>
#include <string.h>

/**
 * alphabet - prints the alphpet except 'q' and 'e' characters
 * @init: the starting charachter
 *  @end: the ending character
 *
 */
void alphabet(char init, char end)

	for (; init <= end; init++)
	{
		if (strchr("qe", init) == 0)
			putchar(init);
	}
}


/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	alphabet('a', 'z');
	putchar('\n');

	return (0);
}
