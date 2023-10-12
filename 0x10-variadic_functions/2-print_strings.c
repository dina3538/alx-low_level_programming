#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to print
 * @n: num of ints
 * @...: variable
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list d;
	char *s;
	unsigned int i;

	va_start(d, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(d, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(d);
}
