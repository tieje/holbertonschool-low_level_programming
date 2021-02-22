#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 * @a: prints chessboard state
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			_putchar(a[x][y];)
		}
		_putchar(10);
	}
}
