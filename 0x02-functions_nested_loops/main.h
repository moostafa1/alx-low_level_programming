#include <unistd.h>
#include <string.h>


int _putchar(char c);




/**
 * print - prints the given string
 *
 * Return: void
 */

void print(char str[])
{
	int i = 0;

	for (; i < (int)strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
