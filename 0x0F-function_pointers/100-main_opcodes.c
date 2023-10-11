#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - the main func
 * @argc: num of args
 * @argv: args vec
 * Return: 0
*/

int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int d;

	if (argc != 2)
		printf("Error\n"), exit(1);

	d = atoi(argv[1]);
	if (d < 0)
		printf("Error\n"), exit(2);
	while (d--)
		printf("%02hhx%s", *ptr++, d ? " " : "\n");
	return (0);
}
