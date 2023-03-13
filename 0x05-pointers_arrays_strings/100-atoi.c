#include "main.h"

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
