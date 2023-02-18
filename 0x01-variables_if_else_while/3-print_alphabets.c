#include <stdio.h>

/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */



/**
 * alphapet - prints the alphapet
 * 
 * init - the starting char
 *  end - the last char
 *
 *  Return: Always 0 (Success)
 */



void alphapet(char init, char end);

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
