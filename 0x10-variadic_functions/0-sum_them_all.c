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

	int r = 0, x;
	unsigned int i;

	va_start(args, n);
	
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		r += x;

	}
	va_end(args);
	return (r);
}
