#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: input string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of c if found, else NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(s + i) == '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
