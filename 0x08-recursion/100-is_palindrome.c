#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: text to get its length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}



/**
 * is_palindrome_2 - returns 1 if a string is a palindrome and 0 if not
 * @s: text to check
 * @len: length of the string
 * @i: incremental through the recursion
 *
 * Return: 1 if palindrome, else 0
 */
int is_palindrome_2(char *s, int len, int i)
{
	if (*(s + i) != *(s + len - 1 - i))
	{
		return (0);
	}
	if (i == len / 2)
	{
		return (1);
	}
	return (is_palindrome_2(s, len, i + 1));
}





/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: text to check
 *
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	return (is_palindrome_2(s, _strlen(s), 0));
}
