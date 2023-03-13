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
 * _core_loop - contains most of the algorithm
 * @s: the string that we are extracting integer from
 * @i: loop initializer
 * @len: length of s array
 * @flag: detects the presence of digits in the string 's'
 * @num_of_digits: the number of digits in the string
 * @sign: represents integer sign (+ve or -ve)
 * @index_start: index of the first digit in the string
 *
 * Return: void
 */
void _core_loop(char *s, int *i, int len, int *flag,
				int *num_of_digits, int *sign, int *index_start)
{
	for (; *i < len; *i = *i + 1)
	{
		if (*(s + *i) >= 48 && *(s + *i) <= 57)
		{
			*flag = 1;
			*num_of_digits = *num_of_digits + 1;


			if (*(s + *i - 1) < 48 || *(s + *i - 1) > 57)
			{
				*index_start = *i;
			}

			if (*(s + *i + 1) < 48 || *(s + *i + 1) > 57)
			{
				break;
			}
		}

		if (*(s + *i) == '-')
		{
			*sign = *sign * -1;
		}
	}
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
	int sign = 1;
	int index_start = 0;
	int num_of_digits = 0;
	unsigned int str_to_int = 0;

	for (; s[len] != '\0';)
		len++;

	_core_loop(s, &i, len, &flag, &num_of_digits, &sign, &index_start);



	for (; index_start <= i; index_start++)
	{
		int ascii_to_digit = *(s + index_start) - '0';

		str_to_int += (ascii_to_digit * _pow_recursion(10, num_of_digits - 1));
		num_of_digits--;

	}
	if (flag == 0)
	{
		return (0);
	}

	return (str_to_int * sign);
}

