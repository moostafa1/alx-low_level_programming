#include "main.h"

/**
 * alloc_grid - returns pointer to a 2d array
 * @width: number of columns
 * @height: number of rows
 *
 *Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int *arr_2d;
	int **arr_p;
	int r = 0;

	arr_p = &arr_2d;
	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2d = malloc(sizeof(*arr_2d) * width * height);
	if (arr_2d == NULL)
	{
		return (NULL);
	}

	for (; r < height; r++)
	{
		int c = 0;

		for (; c < width; c++)
		{
			*(arr_2d + r * height + c) = 0;
		}
	}
	return (arr_p);
}





