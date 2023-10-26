#include "main.h"

/**
 * print_binary - print b
 * @n: poin
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int R = sizeof(n) * 8, M = 0;

	while (R)
	{
		if (n && 1l << --R)
		{
			_putchar('1');
			M++;
		}
		else if (M)
			_putchar('0');
	}
	if (!M)
		_putchar('0');
}
