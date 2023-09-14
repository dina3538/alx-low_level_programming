#include "main.h"

/**
 * print_line - print a straigt line
 *
 * @n: is the number of time the _ charcter
 *	should be printed
*/

void print_line(int n)
{
	int strl;

	if (n < 0)
		_putchar('\n');
	else
	{
		for (strl = 1; strl <= n; strl++)
			_putchar('_');
		_putchar('\n');
	}
}
