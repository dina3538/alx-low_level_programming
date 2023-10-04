#include "main.h"
#include<stdlib.h>
#include<string.h>

/**
 * *argstostr - function that concatenates all the arguments
 * @ac: int
 * @av: argument
 * Return: string
*/

char *argstostr(int ac, char **av)
{
	int i = 0, r = 0, j = 0, cm = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, r--)
		r += strlen(av[i]);

	s = malloc(sizeof(char) * r + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cm++)
			s[cm] = av[i][j];

		s[cm] = '\n';
		cm++;
	}
	s[cm] = '\0';
	return (s);
}
