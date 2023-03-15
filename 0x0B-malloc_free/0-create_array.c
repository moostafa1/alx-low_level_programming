#include "main.h"



/**
 * create_array - creates array with size n and values c
 * @size: size of array
 * @c: charactet to initialize array with
 *
 * Return: pointer to the array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i = 0;

	s = malloc(sizeof(*s) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (; i < size; i++)
		*(s + i) = c;
	return (s);
}
