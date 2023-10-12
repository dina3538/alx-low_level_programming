#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed
 * @n: number of integers passed to the function
 * @...: the int
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int),
			i ? (separator ? separator : "") : "\n");
	}
	va_end(args);
}
