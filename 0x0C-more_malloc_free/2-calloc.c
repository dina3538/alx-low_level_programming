#include "main.h"
#include<string.h>
#include<stdlib.h>

/**
 * *_calloc -  a function that allocates memory for an array,
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *dd;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	dd = malloc(j);

	if (dd == 0)
		return (NULL);
	while (i < j)
	{
		dd[i] = 0;
		i++;
	}

	return (dd);
}
