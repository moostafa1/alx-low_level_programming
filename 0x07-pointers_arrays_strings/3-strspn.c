#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: 2nd string to compare
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int cnt = 0;

	for (; *(s + i) != '\0'; i++)
	{
		unsigned int j = 0;

		if (*(s + i) == ' ' || *(s + i) == ',')
		{
			break;
		}

		for (; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				cnt++;
			}
		}
	}
	return (cnt);
}
