#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: value to fill memory with
 * @size: size of array
 *
 *Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	int i = 0;

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL || arr == 0)
		return (NULL);

	for (; i < size; i++)
		*(arr + i) = 0;
	return (arr);
}
