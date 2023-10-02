#include<stdio.h>

/**
 * main - prints all arguments its receivs
 * @argc: int
 * @argv: list arguments
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
