#ifndef VARIADIC_H
#define VARIADIC_H

#include<stdarg.h>
#include<stdio.h>

/**
 * struct form - struct form
 * @form: format form
 * @f: func assos
*/
typedef struct form
{
	char *form;
	void (*f)(char *, va_list);
} form_t;




int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
