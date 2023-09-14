#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: empty
*/

void print_square(int size)
{
	int row, coulmn;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (row = 0; row <= size; row++)
	{
		for (coulmn = 0; coulmn <= size; coulmn++)
			_putchar('#');
		_putchar('\n');
	}
}
