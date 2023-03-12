#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: 2nd string
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char arr[8] = {'/', ' ', '\t', ',', '\n', '\\', ';', ':'};

	for (; *(s + i) != '\0'; i++)
	{
		unsigned int j = 0;

		for (; j < 8; j++)
		{
			if (*(s + i) == *(arr + j))
			{
				return (i);
			}
		}
	}
}
