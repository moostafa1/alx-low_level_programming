#include "main.h"

/**
 * _isupper - checks if the character is uppercase or not
 * @c: the ascii code for the character we want to check
 *
 * Return: if uppercase 1, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
