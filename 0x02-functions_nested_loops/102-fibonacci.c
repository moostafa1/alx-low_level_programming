#include "main.h"
#include <stdio.h>


/**
 * Fibonacci_arr - creates array of Fibonacci Sequence
 * Fibonacci Sequence Formula = F(n) = F(n-1) + F(n-2)
 * @arr: our storage for the sequence of numbers
 * @start: the initial number of sequence array
 * @limit: the length of array
 *
 * Return: 0
 */
void Fibonacci_arr(long arr[50], int start, int limit)
{
	int i = 0;

	for (; i < limit; i++)
	{
		if (i > 1)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		else
		{
			arr[i] = start;
			start++;
		}
	}
}




/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{

	long arr[50];
	int i = 0;

	Fibonacci_arr(arr, 1, 50);
	for (; i < (int)sizeof(arr) / 8; i++)
	{
		printf("%ld", arr[i]);
		if (i < (int)sizeof(arr) / 8 - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
