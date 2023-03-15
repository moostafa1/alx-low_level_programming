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
	int len = 0;
	int i = 0;
	char *copy;

	if (str == NULL)
		return (NULL);


	while (*(str + len) != '\0')
		len++;

	copy = malloc(sizeof(*copy) * len);

	for (; i <= len; i++)
		*(copy + i) = *(str + i);
	return (copy);
}
