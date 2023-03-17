#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of each element
 *
 *Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	return (arr);
}
