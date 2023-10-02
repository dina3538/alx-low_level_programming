#include<stdio.h>
#include<stdlib.h>

/**
 * main - it all starts here
 * @argc: number of args
 * @argv: array of pointer
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"));
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
