#include "main.h"
#include<stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: int
 * @c: char will initialize
 * Return: NULL if size is 0, pointer if fail
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
