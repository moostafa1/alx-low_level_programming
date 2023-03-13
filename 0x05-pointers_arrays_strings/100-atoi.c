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
 * str_to_int - converts string into its integer value
 * @num: the character array (string)
 * @to_int: the resulting integer value
 * @x: length of the string
 *
 * Return: void
 */
void str_to_int(int *num, int *to_int, int x)
{
	int j = 0;

	for (; j < x; j++)
	{
		int cont = *(num + j) - '0';

		*to_int = *to_int + (cont * _pow_recursion(10, x - 1 - j));
	}
}





/**
 * _core_loop - contains most of the algorithm
 * @i: loop initializer
 * @len: length of s array
 * @x: represents number of values of num array
 * @sign: represents integer sign  (+ve or -ve)
 * @last_num: index of last continuous digit in s array
 * @num: the integer array in digits (not ascii)
 * @s: the string that we are extracting integer from
 * @flag: detects the presence of digits in the string s
 *
 * Return: void
 */
void _core_loop(int *i, int len, int *x, int *sign,
		int *last_num, int *num, char *s, int *flag)
{
	for (; *i < len; *i = *i + 1)
	{
		if (*(s + *i) >= 48 && *(s + *i) <= 57)
		{
			*(num + *x) = *(s + *i);
			*x = *x + 1;
			*flag = 1;
			last_num = i;

			if (*(s + *last_num + 1) < 48 || *(s + *last_num + 1) > 57)
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
	int last_num = 0;
	int to_int = 0;

	for (; s[len] != '\0';)
		len++;

	int num[len];
	int x = 0;

	_core_loop(&i, len, &x, &sign, &last_num, num, s, &flag);
	str_to_int(num, &to_int, x);

	if (flag == 0)
	{
		return (0);
	}
	return (to_int * sign);

}
