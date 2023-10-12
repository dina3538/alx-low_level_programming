#include "variadic_functions.h"

/**
 * format_char - form
 * @separator: string sep
 * @args: args pointer
*/
void format_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * format_int - form
 * @separator: string sep
 * @args: args pointer
*/
void format_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * format_float - form
 * @separator: string sep
 * @args: args pointer
*/

void format_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * format_str - form
 * @separator: string sep
 * @args: args pointer
*/
void format_str(char *separator, va_list args)
{
	char *s = va_arg(args, char *);

	switch ((int)(!s))
	case 1:
		s = "(nil)";
	printf("%s%s", separator, s);
}
/**
 * print_all - funcc to print all
 * @format: format string
*/

void print_all(const char * const format, ...)
{
	int i = 0, k;
	char *separator = "";
	va_list args;
	form_t print[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_str},
		{NULL, NULL}
	};
	va_start(args, format);
	while (format && format[i])
	{
		k = 0;
		while (print[k].form)
		{
			if (format[i] == print[k].form[0])
			{
				print[k].f(separator, args);
				separator = ", ";
			}
			k++;
		}
		i++;
	}
	printf("\n");
	v_end(args);
}
