#include "main.h"

/**
 * print_square - prints n squares according n number of times
 *
 * @size: the number of squars/number of times
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
	else
	{
	for (row = 0; row < size; row++)
	{
		for (coulmn = 0; coulmn < size; coulmn++)
			_putchar('#');
		_putchar('\n');
	}
	}
}
