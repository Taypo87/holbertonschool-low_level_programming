#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 2d array of chars
 *
 */

void print_chessboard(char (*a)[8])
{
int x = 0;
int y;

while (x < 8)
{
	x++;
	for (y = o; y < 8; y++)
	{
		_putchar(a[x][y]);
			}
	_putchar('\n');
}
}
