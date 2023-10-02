#include<stdio.h>

/**
 * main - prints all arguments its receivs
 * @argc: int
 * @argv: list arguments
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i = argc; i++, argc--)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
