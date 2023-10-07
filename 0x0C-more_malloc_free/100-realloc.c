#include "main.h"
#include<stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to memory allocated
 * @old_size: size in bytes
 * @new_size: size in bytes
 * Return: NULL if new_size = 0  ptr if not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dd;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		dd = malloc(new_size);
		if (dd == NULL)
			return (NULL);
		return (dd);
	}
	else
	{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	}
	dd = malloc(new_size);
	if (dd == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		dd[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (dd);
}
