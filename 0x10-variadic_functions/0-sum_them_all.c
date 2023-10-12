#include "variadic_functions.h"

/**
 * sum_them_all - sum of parms
 * @n: nums of args
 * @...: the int sum
 * Return: the int sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int r = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		int x = va_args(args, unsigned int);

		r += x;

	}
	va_end(args);
	return (r);
}
