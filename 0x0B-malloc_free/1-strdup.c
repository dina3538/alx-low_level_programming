#include "main.h"
#include<stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			n[i] = str[i];
			i++;
		}
	}
	return (n);
}
