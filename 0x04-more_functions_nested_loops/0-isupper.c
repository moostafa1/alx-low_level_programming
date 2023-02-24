#include "main.h"

/**
 * _isupper - checks if the inputted ascii matches an uppercase alphabet
 * @c: The character to check
 *
 * Return: On success 1, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
