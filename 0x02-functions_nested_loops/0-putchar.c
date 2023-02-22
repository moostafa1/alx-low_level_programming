#ifndef "main.h"
#include "main.h"
#endif

/**
 * main - prints text
 *
 * Return: Always (0) Success
 */

int main(void)
{
	char str[] = "_putchar\n";
	unsigned int i = 0;

	for (; i < sizeof(str); i++)
	{
		_putchar(str[i]);
	}
	
	return (0);
}
