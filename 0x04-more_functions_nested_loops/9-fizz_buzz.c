#include <stdio.h>

/**
 * fizz_buzz_test - prints the numbers from 1 to n, followed by a new line.
 * for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * for numbers which are multiples of both three and five print FizzBuzz
 * @s: the starting digit
 * @n: the maximum limit
 *
 * Return: none
 */
void fizz_buzz_test(int s, int n)
{

	for (; s <= n; s++)
	{
		if (s % 3 == 0 && s % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (s % 3 == 0)
		{
			printf("Fizz");
		}
		else if (s % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", s);

		}
		if (s != n)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fizz_buzz_test(1, 100);
	return (0);
}
