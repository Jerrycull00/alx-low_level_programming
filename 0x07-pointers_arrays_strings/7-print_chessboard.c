#include "main.h"

/**
 * print_chessboard - this is the entry point
 * @a: array
 * Return: always 0 (success)
 */

void print_chessboard(char (*i)[8])
{
	int a;
	int b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(i[a][b]);
		_putchar('\n');
	}
}
