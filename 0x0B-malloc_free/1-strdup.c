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
	int len = 1;
	char *copy;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + len) != '\0')
		len++;

	copy = malloc(sizeof(*copy) * len);
	if (copy == NULL)
		return (NULL);


	for (; i < len; i++)
		*(copy + i) = *(str + i);
	return (copy);
}
