#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * of an array
 * @array: input array to search in
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
