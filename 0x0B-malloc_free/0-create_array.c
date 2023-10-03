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

	if (size == 0)
	{
		return (NULL);
	}
	char *arr = malloc(size * sizeof(char));

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
