#include "main.h"

/**
 * is_prime_number_2 -  checks if the number is prime
 * @n: number to check
 * @y: values to compare with the number being checking
 *
 * Return: 1 if the input integer is prime, otherwise return 0
 */
int is_prime_number_2(int n, int y)
{
	if (y == 1)
	{
		return (1);
	}

	if (y == 0 || n <= 0 || n % y == 0)
	{
		return (0);
	}
	return (is_prime_number_2(n, y - 1));
}




/**
 * is_prime_number -  checks if the number is prime
 * @n: number to check
 *
 * Return: 1 if the input integer is prime, otherwise return 0
 */
int is_prime_number(int n)
{
	return (is_prime_number_2(n, n - 1));
}
