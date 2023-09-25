#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array parameter
 * Return: 0 success
 **/

void print_chessboard(char (*a)[8])
{
	int n, t;

	for (n = 0; n < 8; n++)
	{
		for (t = 0; t < 8; t++)
			_putchar(a[n][t]);
		_putchar('\n');
	}
}
