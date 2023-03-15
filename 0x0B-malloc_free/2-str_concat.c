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
 * set_value - set array to another
 * @cat: 1st string
 * @s: 2nd string
 * @index: index to put value in
 *
 *Return: void
 */
void set_value(char *cat, char *s, int *index)
{
	int i = 0;

	for (; i < length(s); i++)
	{
		*(cat + *index) = *(s + i);
		*index = *index + 1;
	}
	*(cat + *index) = '\0';
}




/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 *Return: pointer to a newly allocated space in memory with s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int index = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	cat = malloc(sizeof(*cat) * (length(s1) + length(s2) + 1));

	if (cat == NULL)
		return (NULL);

	set_value(cat, s1, &index);
	set_value(cat, s2, &index);

	return (cat);
}
