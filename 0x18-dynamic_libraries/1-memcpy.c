#include "main.h"

/**
 * *_memcpy - copy the memory area
 * @dest: memory area
 * @src: the source
 * @n: length to be copies
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int fi;

	for (fi = 0; fi < n; fi++)
	{
		dest[fi] = src[fi];
	}

	return (dest);
}
