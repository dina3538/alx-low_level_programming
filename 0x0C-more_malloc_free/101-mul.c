#include "main.h"
#include<stdlib.h>

void _puts(char *str);
void print_int(unsigned long int n);

/**
 * _puts - print a string
 * @str: pinter
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_int - print an integers
 * @n: int
 * Return: void
*/

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, r;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		r = n / div;
		_putchar('0' + r);
	}
}

/**
 * main - multiplies two positive nums
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(atoi(argv[1]) * atoi(argv[2]));
	_putchar('\n');

	return (0);
}
