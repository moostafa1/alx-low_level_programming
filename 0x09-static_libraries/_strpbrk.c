#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: 2nd string to compare
 *
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		unsigned int j = 0;

		for (; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
