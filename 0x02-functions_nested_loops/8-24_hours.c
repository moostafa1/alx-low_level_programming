#include "main.h"

/**
 * jack_bauer - every minute of the day of Jack Bauer, starting from 00:00 to
 * 23:59
 *
 * Return: none
 */

void jack_bauer(void)
{
	int hr1 = 2;
	int hr2 = 3;
	int min1 = 5;
	int min2 = 9;
	int i = 0;

	for (; i <= hr1; i++)
	{
		int j = 0;

		for (; j <= hr2; j++)
		{
			int k = 0;

			for (; k <= min1; k++)
			{
				int l = 0;

				for (; l <= min2; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
