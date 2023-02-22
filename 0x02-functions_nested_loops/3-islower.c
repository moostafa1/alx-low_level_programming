#include <ctype.h>

/**
 * _islower - checks if the character is 'c' or not
 * @c: the ascii code for the character we want to check
 *
 * Return: if 'c' 1, else 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
