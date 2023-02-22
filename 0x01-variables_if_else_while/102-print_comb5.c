#include <stdio.h>

/**
 * print - prints text
 * @i: 1st integer to print
 * @j: 2nd integer to print
 * @k: 3rd integer to print
 * @l: 4th integer to print 
 */

void print(int i, int j, int k, int l)
{
	putchar(i + '0');
	putchar(j + '0');
	putchar(' ');
	putchar(k + '0');
	putchar(l + '0');
}





/**
 * condition - prints text according to specific condition
 * @i: 1st integer to compare
 * @j: 2nd integer to compare
 * @k: 3rd integer to compare
 * @l: 4th integer to compare
 * @comp: value to set comparision with it
 */

void condition(int i, int j, int k, int l, int comp)
{
        if (i + j + k + l != comp || j > i)
        {
		putchar(',');
		putchar(' ');
	}
}




/**
 * main - prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int max = 10;

        while (i < max)
        {
		int j = 0;

		while (j < max)
		{
			int k = 0;

			while (k < max)
                        {
				int l = 0;

				while (l < max)
                                {
					if (((k * max) + l) > ((i * max) + j))
                                        {
						print(i, j, k, l);
						condition(i, j, k, l, (((max - 1) * 3) + (max - 2)));
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
