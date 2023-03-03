#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to reverse
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int lst_ind = n - 1;

	for (; i < n / 2; i++)
	{
		int swap = a[i];

		a[i] = a[lst_ind - i];
		a[lst_ind - i] = swap;
	}
}

