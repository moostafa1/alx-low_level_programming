#include <ctype.h>

/**
 *_isalpha - checks if the character is 'c' or not
 * @c: the ascii code for the character we want to check
 *
 * Return: if 'c' 1, else 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}

