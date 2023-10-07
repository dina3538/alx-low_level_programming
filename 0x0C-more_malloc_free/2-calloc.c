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
	int *dd;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	dd = malloc(sizeof(int) * nmemb);
	if (dd == 0)
		return (NULL);
	memset(dd, 0, sizeof(int) * nmemb);

	return (dd);
}
