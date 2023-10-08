#include "main.h"
#include<stdlib.h>


void _puts(char *str);
int _atoi(const char *a);
void print_int(unsigned long int n);

/**
 * _puts - print a string
 * @str: pinter to the string to print
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
 * _atoi - convert string to integer
 * @a: char type string
 * Return: int converted
*/

int _atoi(const char *a)
{
	int si = 1;
	unsigned long int r = 0, f1, i;

	for (f1 = 0; !(a[f1] >= 48 && a[f1] <= 57); f1++)
	{
		if (a[f1] == '-')
		{
			si *= -1;
		}
	}
	for (i = f1; a[i] >= 48 && a[i] <= 57; i++)
	{
		r *= 10;
		r += (a[i] - 48);
	}
	return (si * r);
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
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
