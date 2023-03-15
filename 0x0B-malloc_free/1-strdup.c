#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: input string
 *
 *Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int len = 0;
	char *copy;
	int i = 0;

	while (*(str + len) != '\0')
		len++;

	copy = malloc(sizeof(*copy) * len);

	for (; i <= len; i++)
		*(copy + i) = *(str + i);
	return (copy);
}
