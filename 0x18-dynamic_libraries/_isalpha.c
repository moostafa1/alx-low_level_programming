#include "main.h"

/**
 *_isalpha - checks if the character is an alphabet or not
 * @c: the ascii code for the character we want to check
 *
 * Return: if alphabet 1, else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
