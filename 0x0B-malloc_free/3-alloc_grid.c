#include "main.h"

/**
 * alloc_grid - returns pointer to a 2d array
 * @width: array width (number of columns)
 * @height: array height (number of rows)
 *
 *Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr_2d;
	int r = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2d = malloc(sizeof(*arr_2d) * height);

	if (arr_2d == NULL)
	{
		free(arr_2d);
		return (NULL);
	}

	for (; r < height; r++)
	{
		*(arr_2d + r) = malloc(sizeof(*arr_2d) * width);

		if (*(arr_2d + r) == NULL)
		{
			for (; r >= 0; r--)
				free(*(arr_2d + r));

			free(arr_2d);
			return (NULL);
		}
	}

	for (r = 0; r < height; r++)
	{
		int c = 0;

		for (; c < width; c++)
		{
		*((*arr_2d + r) + r * width + c) = 0;
		}
	}
	return (arr_2d);
}
