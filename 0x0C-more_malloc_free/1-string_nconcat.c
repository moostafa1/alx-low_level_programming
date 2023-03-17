#include "main.h"

/**
 * length - gets length of string
 * @s: input string
 *
 *Return: length of string
 */
int length(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}




/**
 * copy_str - set string value to another string array
 * @s1: string to copy from
 * @s2: string to cpoy in
 * @n: number of bytes (characters) to copy
 * @index: index to start from
 *
 *Return: void
 */
void copy_str(char *s1, char *s2, int index, int n)
{
	int i = 0;

	for (; index < n; index++)
	{
		*(s2 + index) = *(s1 + i);
		i++;
	}
}



/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n:  the first n bytes of s2
 *
 *Return: pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(*str) * length(s1) + n + 1);

	if (str == NULL || str == 0)
	{
		free(str);
		return (NULL);
	}

	copy_str(s1, str, 0, length(s1));
	if (n < (unsigned int)length(s2))
	{
		copy_str(s2, str, length(s1), length(s1) + n);
		*(str + length(s1) + n) = '\0';
	}
	copy_str(s2, str, length(s1), length(s2));
	*(str + length(s1) + length(s2)) = '\0';
	return (str);
}
