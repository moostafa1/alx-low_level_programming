#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: other board dimension in char
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;

	for (; row < 8; row++)
	{
		int col = 0;

		for (; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
