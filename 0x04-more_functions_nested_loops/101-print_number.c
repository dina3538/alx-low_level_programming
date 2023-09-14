#include "main.h"

/**
 * print_number - print 0-9
 *		only using _putchar twise
 * Return: Always 0 (success)
*/

void print_number(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
	return (0);
}
