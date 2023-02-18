#include <stdio.h>

/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';

	for(;a<='z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
