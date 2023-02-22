#include "main.h"

/**
 * print - prints the given string
 *
 * Return: void
 */

void print(char str[], int len)
{
	int i = 0;

	for (; i < len; i++)
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
	print("_putchar\n", 9);
	
	return (0);
}
