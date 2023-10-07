#include "main.h"
#include<stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: int
 * Return: pointer or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}
