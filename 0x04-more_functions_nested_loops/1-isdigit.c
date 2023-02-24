#include "main.h"

/**
 * _isdigit - checks if the inputted ascii matches a digit
 * @c: The character to check
 *
 * Return: On success 1, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
