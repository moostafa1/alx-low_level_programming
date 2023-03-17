#include "main.h"

/**
 * array_range - reates an array of integers
 * @min: the initial value
 * @max: the limit
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (; min <= max; min++)
	{
		*(arr + i) = min;
		i++;
	}
	return (arr);
}
