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
	void *dd;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		return (ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		dd = malloc(new_size);
		if (dd == NULL)
			return (NULL);
		return (dd);
	}
	if (new_size > old_size)
	{
	dd = malloc(new_size);
	if (dd == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)dd + i) = *((char *)ptr + i);
	free(ptr);
	}
	return (dd);
}
