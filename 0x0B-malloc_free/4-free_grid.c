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
	if (grid == NULL)
	{
		printf("OK\n");
		exit(0);
	}
	for (; height >= 0; height--)
	{
		free(*(grid + height));
	}
	free(grid);
	exit(0);
}
