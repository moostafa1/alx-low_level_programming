#include "main.h"

/**
 * print - prints the given string
 *
 * Return: void
 */

void print(char str[])
{
	unsigned int i = 0;

	for (; i < sizeof(str); i++)
	{
		_putchar(str[i]);
	}
}




/**
 * main - prints text
 *
 * Return: Always (0) Success
 */

int main(void)
{
	print("_putchar\n");
	
	return (0);
}
