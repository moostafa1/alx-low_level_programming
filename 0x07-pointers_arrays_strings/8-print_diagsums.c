#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to the array
 * @size: size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row = 0;
	int sum_main_diagonal = 0;
	int sum_secondary_diagonal = 0;

	for (; row < size; row++)
	{
		int col = 0;

		for (; col < size; col++)
		{
			if (row == col)
			{
				sum_main_diagonal += *(a + row * size + col);
			}
			if (row + col == size - 1)
			{
				sum_secondary_diagonal += *(a + row * size + col);
			}
		}
	}
	printf("%d, %d\n", sum_main_diagonal, sum_secondary_diagonal);
}
