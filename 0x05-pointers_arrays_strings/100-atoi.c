#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base to be powered
 * @y: value of power
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}




/**
 * _atoi -  converts a string of numbers into integer
 * @s: the character array (string)
 *
 * Return: integer, else 0
 */
int _atoi(char *s)
{
	int i = 0;
	int len = 0;
	int flag = 0;

	for (; s[len] != '\0';)
		len++;

	for (; i < len; i++)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			flag = 1;
		}
		else
		{
			break;
		}
	}

	int j = 0;
	int str_to_int = 0;

	for (; j < i; j++)
	{
		int cont = *(s + j) - '0';

		str_to_int += (cont * _pow_recursion(10, i - 1 - j));
		int x = _pow_recursion(10, i - 1 - j);
	}

	if (flag == 0)
	{
		return (0);
	}
	return (str_to_int);
}
