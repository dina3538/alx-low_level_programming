#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times to print diagonal lines
 * Return: empty
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 0; postn <= n; postn++)
		{
			for (space = 0; space <= postn; space++)
				_putchar(32);
			_putchar(92);/*is equal to '\' char*/
			_putchar('\n');
		}
	}
}
