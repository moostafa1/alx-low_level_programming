#include <stdio.h>

/**
 * print - prints text
 * @i: first integer to print
 * @j: second integer to print
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
 * @i : first integer to compare
 * @c1: compare i with it
 * @j : second integer to print
 * @c2: compare j with it
 */

void condition(int i, int j, int k, int l, int comp)
{
        if (i + j + k + l != comp)
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

                while (j < max - 1)
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
