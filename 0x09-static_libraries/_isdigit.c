#include "main.h"

/**
 *_isdigit - checks if the character is digit or not
 * @c: the ascii code for the character we want to check
 *
 * Return: if digit 1, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
