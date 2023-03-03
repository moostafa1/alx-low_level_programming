#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string
 *
 * Return: void
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (; i < sizeof(str); i++)
	{
		if (str[i] >= 97 || str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}

