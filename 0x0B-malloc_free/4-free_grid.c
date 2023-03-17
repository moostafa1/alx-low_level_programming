#include "main.h"

/**
 * free_grid - returns pointer to a 2d array
 * @grid: pointer to a 2d array
 * @height: array height (number of rows)
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		printf("OK\n");
		exit(0);
	}
	for (; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
	exit(0);
}
