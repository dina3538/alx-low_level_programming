#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the rows
 * Return: nothing!
*/

void print_chessboard(char (*a)[8])
{
	int fi, fj;

	for (fi = 0; fi < 8; fi++)
	{
		for (fj = 0; fj < 8; fj++)
		{
			_putchar(a[fi][fj]);
		}
		_putchar('\n');
	}
}
